#include <iostream>
#include "String.h"



int main(int argc, char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  char tableau[]={'H','e','l','l','o','\0','e'};
  string str(tableau);
  std::cout << str.c_str() << std::endl << str.size() << std::endl <<str.capacity() << std::endl;
  return 0;
}
