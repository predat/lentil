#include "lenssystem.h"
#include <string>

//json parsing
#include "../ext/json.hpp"
#include <fstream>
using json = nlohmann::json;


void create_public_json(json lens_database, std::string lens_public_database_path) {
  for (auto &element : lens_database)
    {
      if (element.find("optical-elements-adjusted") != element.end()) {
        element.erase("optical-elements-adjusted");
      }
      element.erase("optical-elements-patent");
      element.erase("patent-location");
      element.erase("focal-length-mm-raytraced");
      element.erase("focal-length-mm-patent");
    }
    
    std::ofstream out_json(lens_public_database_path);
    out_json << std::setw(2) << lens_database << std::endl;

    printf("Written public lens database to location: %s\n", lens_public_database_path.c_str());
}


int main(int argc, char *argv[])
{
  
  std::string lentil_path = std::getenv("LENTIL_PATH");
  std::string lens_public_database_path = lentil_path + "/../www/json/lenses_public.json";
  std::string lens_database_path = lentil_path + "/database/lenses.json";
  std::ifstream in_json(lens_database_path);
  json lens_database = json::parse(in_json);

  create_public_json(lens_database, lens_public_database_path);
}