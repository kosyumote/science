#include <iostream>
#include <stdlib.h>

#define HELP_STRING "This is the help string that needs to be done at some point"

void getData(File* f, int*** eqs, int** vars)
{
  
}

int main(int argc, char* argv[])
{
  FILE* fin, fout;
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
        if(fout == NULL)
        {
          std::cout << "Unable to open " << argv[i] + 2 << " for writing." << std::endl;
        }
        break;
      }
    }
    else
    {
      if(fin != NULL)
      {
        fin = fopen(argv[i], "r");
        if(fin == NULL)
        {
         std::cout << "Unable to read " << argv[i] << std::endl;
         return 1;
        }
      }
      else
      {
       std::cout << "Incorrect usage. Use -h for more information." << std::endl;
       return 1;
      }
    } 
  }
  
  if(fin == NULL)
  {
    std::cout << "No input file specified." << std::endl;
    return 1;
  }
  
  
  int* vars;
  int** eqs;
  
  getData(fin, &vars, &eqs);
  
  
  delete[] vars;
}
