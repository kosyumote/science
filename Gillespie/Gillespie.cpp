#include <iostream>
#include <stdlib.h>

#define HELP_STRING "This is the help string that needs to be done at some point"

void getData(File* f, int** eqs, int* vars)
{
  
}

int main(int argc, char* argv[])
{
  FILE* in, out;
  double updateTime = 0;
  for(int i = 1; i <= argc; i++)
  {
    if(argv[i][0] == '-')
    {
      switch(argv[i][1])
      {
        case 'h':
        std::cout << HELP_STRING;
        return 0;
        case 'u':
        updateTime = strtod(argv[i][2], NULL);
        break;
        case 'o':
        out = fopen(argv[i] + 2, "w");
        if(out == NULL)
        {
          std::cout << "Unable to open " << argv[i] + 2 << " for writing." << std::endl;
        }
        break;
        
      }
    }
    };
  }
  
  int* vars = new int[NUMBER_OF_VARIABLES];
  
  
  
  delete[] vars;
}
