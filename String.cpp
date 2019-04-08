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

size_t string::max_size() const{
  return MAX_SIZE;
}

const char* string::c_str() const{
  return data_;
}

string::string(const char* s){
  size_=0;
  while (s[size_]!='\0' and size_<MAX_SIZE){
    ++size_;
  }
  capacity_=size_;
  data_=new char[size_];
  for (int i=0; i<size_;++i){
    data_[i]=s[i];
  }
  data_[size_]='\0';
  
}

void string::resize (size_t n, char c){
  if (n<size_){
    size_=n;
    data_[size_]='\0';
    }
  if (n>size_){
    int i=0;
    while (i<n and i<MAX_SIZE){
      data_[size_+i]=c;
      ++i;
    }
    size_=n;
    data_[size_]='\0';
  }
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
