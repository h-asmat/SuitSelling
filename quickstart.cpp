 #include "simdjson.h"
 #include <string>
   int main(int argc, char *argv[]) {
     simdjson::dom::parser parser;
     std::string path(argv[1]);
     try {
        simdjson::dom::element json = parser.load(path);
        std::cout << json << std::endl;
     }
     catch (simdjson::simdjson_error err)
     {
         
     }
   }
