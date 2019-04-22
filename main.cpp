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
  std::cout << "c_str reading test : " << str1.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str1.size()==5) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str1.capacity()==5) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str1.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str2(table2);
  std::cout<<"Empty table :"<<std::endl;
  std::cout << "c_str reading test : " << str2.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str2.size()==0) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str2.capacity()==0) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str2.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str3(table3);
  std::cout<<"Overload table (>100 characters) :"<<std::endl;
  std::cout << "c_str reading test : " << str3.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str3.size()==100) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str3.capacity()==100) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str3.max_size()==100) << std::endl;
  std::cout<<std::endl;
  
  string str4(table1);
  str4.clear();
  std::cout<<"clear function :"<<std::endl;
  std::cout << "c_str reading test : " << str4.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str4.size()==0) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str4.capacity()==5) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str4.max_size()==100) << std::endl;
  
  std::cout<<std::endl;
  
  string str5;
  char c='C';
  str5=c;
  std::cout<<"operator=(char) :"<<std::endl;
  std::cout << "c_str reading test : " << str5.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str5.size()==1) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str5.capacity()==1) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str5.max_size()==100) << std::endl;
  
  std::cout<<std::endl;
  
  string str6;
  str6=str1;
  std::cout<<"operator=(string) :"<<std::endl;
  std::cout << "c_str reading test : " << str6.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str6.size()==5) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str6.capacity()==5) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str6.max_size()==100) << std::endl;
  
  std::cout<<std::endl;
  
  
  string str7;
  str7=str1;
  char A[]=" world!";
  char *a=A;
  string str8=str7+a;
  std::cout<<"operator+(char*) :"<<std::endl;
  std::cout << "c_str reading test : " << str8.c_str() << std::endl 
  <<"size test : "<<std::boolalpha<< (str8.size()==12) << std::endl 
  <<"capacity test : "<<std::boolalpha<<(str8.capacity()==12) << std::endl 
  <<"MAX_SIZE test : "<<std::boolalpha<< (str8.max_size()==100) << std::endl;
  
  

  std::cout << str3.c_str() << std::endl << str3.size() << std::endl <<str3.capacity() << std::endl << str3.max_size() << std::endl;
  //reserve
  std::cout << std::endl << std::endl;
  std::cout << str1.c_str() << std::endl << str1.size() << std::endl <<str1.capacity() << std::endl << str1.max_size() << std::endl;
  str1.reserve(25);
  std::cout << str1.c_str() << std::endl << str1.size() << std::endl <<str1.capacity() << std::endl << str1.max_size() << std::endl;
  //operator=(char*)
  std::cout << std::endl << std::endl;
  str2 = str1.c_str();
  std::cout << str2.c_str() << std::endl << str2.size() << std::endl <<str2.capacity() << std::endl << str2.max_size() << std::endl;
  //operator+(string)
  std::cout << std::endl << (str1+str1).c_str() << std::endl;

  string nullstr;
  nullstr=string(table2);
  string str10;
  str10=str1+'c';
  string str9;
  str9=nullstr+'c';

  //operator+(char)
  std::cout << str10.c_str() << std::endl << str10.size() << std::endl <<str10.capacity() << std::endl << str10.max_size() << std::endl;
  std::cout << str9.c_str() << std::endl << str9.size() << std::endl <<str9.capacity() << std::endl << str9.max_size() << std::endl;


  return 0;
}
