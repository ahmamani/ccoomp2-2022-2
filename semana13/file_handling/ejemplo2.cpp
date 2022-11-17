#include <iostream>    
#include <fstream>     

int main () {

  std::ifstream source("source-file.txt");  
  std::ofstream destination ("dest-file.txt");

  char c;
  while (source.get(c))                
    destination << c;

  if (source.eof())                     
    std::cout << "[EoF reached]\n";
  else
    std::cout << "[error reading]\n";

  source.close();                     

  return 0;
}