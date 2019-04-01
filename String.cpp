#include <cassert>
#include <iostream>

char* string::data(){
  return data_;
}

size_t string::size(){
  return next_;
}

size_t capacity(){
	return capacity_;
}

static size_t max_size(){
	return MAX_SIZE;
}

/*string::string(){
}

string::string(.....){
  this->=;
  this->=;
  ....
}*/