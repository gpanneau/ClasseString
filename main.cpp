#include <iostream>
#include "String.h"



int main(int argc, char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  char tableau[]={'H','e','l','l','o','\0','e'};
  string str(tableau);
  std::cout << 'size : ' << str.size() << std::endl;
  return 0;
}
