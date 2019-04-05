#include <cassert>
#include <iostream>
#include "String.h"

size_t string::MAX_SIZE=100;

size_t string::size(){
  return size_;
}

size_t string::length(){
  return size_;
}

size_t string::capacity(){
	return capacity_;
}

/*DEFAULT CONSTRUCTOR

string::string(){
	new char null_character="\0";
	data_=&null_character;
	size_=0;
	capacity_=size_+1;
	MAX_SIZE=100;
}*/

string::string(const char* s){
  *data_=*s;
  size_=0;
  while (*(data_+size_)!='\0'){
    ++size_;
  }
  capacity_=size_+1;
}

/*char* string::copie(const string& str){
  int *copy=new char[];
	for (int i=0;i<taille;i++){
		copy[i]=*(str+i);
	}
  return copy;
}*/

void string::clear(){
  *data_='\0';
  size_=0;
}

bool string::empty(){
    if (size_ == 0){
        return true;
    }
    return false;
}
