const express = require('express');
const app = express();
const mongoose = require('mongoose');
const Lens = require('./models/Lens');
const lenses = require('./json/lenses_public.json');
const {lensMap} = require('./functions/lensMap');
const passport = require('passport');
const LocalStrategy = require('passport-local');
const User = require('./models/User');
const bodyParser = require('body-parser');
const keys = require('./keys');
const jsdom = require('jsdom');
const {JSDOM} = jsdom;

// Dynamically switch between dev and live ports
const PORT = process.env.PORT || 3001;

// Setup database
mongoose.connect('mongodb://localhost/lentil') || mongoose.connect(keys.db);

const db = mongoose.connection;
db.on('error', console.error.bind(console, 'connection error: '));

// Map json lenses object to array
const lensArray = Object.keys(lenses).map((key) => [key, lenses[key]]);

// Update or add each lens model
lensMap(lensArray);

// Setup ejs view engine
app.set('view engine', 'ejs');

// Setup body-parser
app.use(bodyParser.urlencoded({extended: false}));
// References files from /public directory
app.use(express.static(__dirname + '/public'));

// Passport Config
app.use(require('express-session')({
  secret: keys.passport,
  resave: false,
  saveUninitialized: false,
  maxAge: 365 * 24 * 60 * 60 * 1000
}));
app.use(passport.initialize());
app.use(passport.session());
passport.use(new LocalStrategy(User.authenticate()));
passport.serializeUser(User.serializeUser());
passport.deserializeUser(User.deserializeUser());

// Require route files
const indexRoutes = require('./routes/index');
const userRoutes = require('./routes/user');
const payRoutes = require('./routes/pay');

// Use route files
app.use(indexRoutes);
app.use(userRoutes);
app.use(payRoutes);

app.listen(PORT, () => {
  console.log('The server is running on: ', PORT);
});