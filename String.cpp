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

static size_t max_size(){
	return MAX_SIZE;
}

/*char* string::copie(const string& str){
  int *copy=new char[];
	for (int i=0;i<taille;i++){
		copy[i]=*(str+i);
	}
  return copy;
}*/
  
int string::size(){
  int i=0;
  while (*(data_+i)=!"/0"){
    ++i;
  }
  return i;
}

void string::clear(){
  *data_="/0";
  size_=0;
}
  
/*string::string(){
}

string::string(.....){
  this->=;
  this->=;
  ....
}*/
