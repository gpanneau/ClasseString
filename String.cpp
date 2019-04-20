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
  data_=new char[size_+1];
  for (int i=0; i<size_;++i){
    data_[i]=s[i];
  }
  data_[size_]='\0';

}

string::string(const string& str){
  if (str.size()<MAX_SIZE){
    size_=str.size();
    data_=new char[size_+1];
  }
  else {
    size_=MAX_SIZE;
    data_=new char[MAX_SIZE+1];
  }
  int i=0;
  while (i<size_){
    data_[i]=str.c_str()[i];
    ++i;
  }

  data_[size_]='\0';
  capacity_=size_;
}

string::~string(){
  delete [] data_;
}

void string::clear(){
  size_=0;
  *data_='\0';
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

void string::reserve (size_t n){
  if (n>MAX_SIZE){
    throw std::length_error("Length should not exceed 100");
  }
  if (capacity_!=n){
    if (size_>n){
      n=size_;
    }
    char* temp=data_;
    data_=new char[n+1];
    int i=0;
    while (i<size_){
      data_[i]=temp[i];
      ++i;
    }
    data_[size_]='\0';
    capacity_=n;
  }
}

string& string::operator= (const char* s){
  size_=0;
  while (s[size_]!='\0' and size_<MAX_SIZE){
    ++size_;
  }
  capacity_=size_;
  data_=new char[size_+1];
  for (int i=0; i<size_;++i){
    data_[i]=s[i];
  }
  data_[size_]='\0';
  return *this;
}
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
