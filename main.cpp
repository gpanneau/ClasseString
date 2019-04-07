#include <iostream>
#include "String.h"



int main(int argc, char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  char table1[]={'H','e','l','l','o','\0','e'};
  string str1(table1);
  std::cout << str1.c_str() << std::endl << str1.size() << std::endl <<str1.capacity() << std::endl;
  char table2[]={""};
  string str2(table2);
  std::cout << str2.c_str() << std::endl << str2.size() << std::endl <<str2.capacity() << std::endl;
  return 0;
}


