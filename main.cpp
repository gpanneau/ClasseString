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
  
  std::cout<<std::endl;
  //reserve
  string s_res;
  s_res=str1;
  s_res.reserve(25);
  std::cout<<"reserve :"<<std::endl;
  std::cout << "c_str reading test : " << s_res.c_str() << std::endl
  <<"size test : "<<std::boolalpha<< (s_res.size()==5) << std::endl
  <<"capacity test : "<<std::boolalpha<<(s_res.capacity()==25) << std::endl
  <<"MAX_SIZE test : "<<std::boolalpha<< (s_res.max_size()==100) << std::endl;
  
  std::cout<<std::endl;
  //operator=(char*)
  string s_egal;
  s_egal = str1.c_str();
  std::cout<<"operator=(char*) :"<<std::endl;
  std::cout << "c_str reading test : " << s_egal.c_str() << std::endl
  <<"size test : "<<std::boolalpha<< (s_egal.size()==5) << std::endl
  <<"capacity test : "<<std::boolalpha<<(s_egal.capacity()==5) << std::endl
  <<"MAX_SIZE test : "<<std::boolalpha<< (s_egal.max_size()==100) << std::endl;

  std::cout<<std::endl;
  //operator+(string)
  string s_plus;
  s_plus = str1+str1;
  std::cout<<"operator=(char*) :"<<std::endl;
  std::cout << "c_str reading test : " << s_plus.c_str() << std::endl
  <<"size test : "<<std::boolalpha<< (s_plus.size()==10) << std::endl
  <<"capacity test : "<<std::boolalpha<<(s_plus.capacity()==10) << std::endl
  <<"MAX_SIZE test : "<<std::boolalpha<< (s_plus.max_size()==100) << std::endl;



  return 0;
}
