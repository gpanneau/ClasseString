#include <cassert>
#include <iostream>
#include "String.h"

size_t string::MAX_SIZE=100;

size_t string::size() const{
  return size_;
}

size_t string::length() const{
  return size_;
}

size_t string::capacity() const{
  return capacity_;
}

const char* string::c_str() const{
  return data_;
}

string::string(const char* s){
  size_=0;
  while (*(s+size_)!='\0'){
    ++size_;
  }
  capacity_=size_;
  data_=new char[size_];
  *data_=*s;
}

/*char* string::copie(const string& str){
  int *copy=new char[];
	for (int i=0;i<taille;i++){
		copy[i]=*(str+i);
	}
  return copy;
}*/

/*void string::clear(){
  *data_='\0';
  size_=0;
}

bool string::empty() const{
    if (size_ == 0){
        return true;
    }
    return false;
}*/
