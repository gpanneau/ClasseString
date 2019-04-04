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

