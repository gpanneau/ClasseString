#include <iostream>
#include "String.h"



int main(int argc, char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  char table1[]={'H','e','l','l','o','\0','e'};
  string str1(table1);
  std::cout << str1.c_str() << std::endl << str1.size() << std::endl <<str1.capacity() << std::endl << str1.max_size() << std::endl;
  char table2[]={'\0'};
  string str2(table2);
  std::cout << str2.c_str() << std::endl << str2.size() << std::endl <<str2.capacity() << std::endl << str2.max_size() << std::endl;
  char table3[]={'a','z','e','r','t','y','u','i','o','p','q','s','d','f','g','h','j','k','l','m','w',
'x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s','d','f','g','h','j','k',
'l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s','d','f','g',
'h','j','k','l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s',
'd','f','g','h','j','k','l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o',
'p','q','s','d','f','g','h','j','k','l','m','w','x','c','v','b','n'};
  string str3(table3);
  std::cout << str3.c_str() << std::endl << str3.size() << std::endl <<str3.capacity() << std::endl << str3.max_size() << std::endl;
  return 0;
}
  
