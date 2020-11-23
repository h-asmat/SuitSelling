 #include "simdjson.h"
 #include <string>
 #include <stdio.h>
 #include <unistd.h>
#include <stdlib.h>
#define INPUTSIZE 10000000

   int main(int argc, char *argv[]) {
     simdjson::dom::parser parser;
     char input[INPUTSIZE] = {0};

     if (read(STDIN_FILENO, input, INPUTSIZE) < 0)
	{
		fprintf(stderr, "Couldn't read stdin.\n");
	}
     simdjson::dom::element json = parser.load(input);
     std::cout << json << std::endl;
   }
