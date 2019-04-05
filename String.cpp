#include <cassert>
#include <iostream>
#include "String.h"

char* string::data(){
  return data_;
}

size_t string::size(){
  return size_;
}

size_t capacity(){
	return capacity_;
}

string::string(){
	new char null_character="\0";
	data_=*null_character;
	size_=0;
	capacity_=size_+1;
	MAX_SIZE=100;
}

/*char* string::copie(const string& str){
  int *copy=new char[];
	for (int i=0;i<taille;i++){
		copy[i]=*(str+i);
	}
  return copy;
}*/
  
/*int string::size(){
  int i=0;
  while (*(data_+i)=!"/0"){
    ++i;
  }
  return i;
}*/

void string::clear(){
  *data_="/0";
  size_=0;
}
  
string::string(){

bool string::empty(){
  if (size_ == 0){
      return true;
  }
  return false;
}


string::string(){
  this->=;
  this->=;
  ....
}

