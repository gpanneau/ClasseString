#include <iostream>
#include "String.h"



int main(int argc, char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  char table1[]={'H','e','l','l','o','\0','e'};    // current case
  char table2[]={'\0'};    // limit case : empty table
  char table3[]={'a','z','e','r','t','y','u','i','o','p','q','s','d','f','g','h','j','k','l','m','w',
'x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s','d','f','g','h','j','k',
'l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s','d','f','g',
'h','j','k','l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o','p','q','s',
'd','f','g','h','j','k','l','m','w','x','c','v','b','n','a','z','e','r','t','y','u','i','o',
'p','q','s','d','f','g','h','j','k','l','m','w','x','c','v','b','n'};  // limit case : size>MAX_SIZE
  char table4[]="fonction clear";

  string str1(table1);
  std::cout<<"current case :"<<std::endl;
  std::cout << "c_str reading test : " <<std::boolalpha<< (str1.c_str()=="Hello") << std::endl 
  <<"size test : "<<std::boolalpha<< (str1.size()==5) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str1.capacity()==5) << std::endl 
  <<"MAX-SIZE test : "<<std::boolalpha<< (str1.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str2(table2);
  std::cout<<"Empty table :"<<std::endl;
  std::cout << "c_str reading test : " <<std::boolalpha<< (str2.c_str()=="") << std::endl 
  <<"size test : "<<std::boolalpha<< (str2.size()==0) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str2.capacity()==0) << std::endl 
  <<"MAX-SIZE test : "<<std::boolalpha<< (str2.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str3(table3);
  std::cout<<"Overload table (>100 characters) :"<<std::endl;
  std::cout << "c_str reading test : " <<std::boolalpha<< bool(1==1) << std::endl 
  <<"size test : "<<std::boolalpha<< (str2.size()==100) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str2.capacity()==100) << std::endl 
  <<"MAX-SIZE test : "<<std::boolalpha<< (str2.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str4(table1);
  str4.clear();
  std::cout<<"clear function :"<<std::endl;
  std::cout << "c-str reading test : " <<std::boolalpha<< (str2.c_str()=="") << std::endl 
  <<"size test : "<<std::boolalpha<< (str2.size()==0) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str2.capacity()==5) << std::endl 
  <<"MAX-SIZE test : "<<std::boolalpha<< (str2.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  return 0;
}
  
