#include <cassert>
#include <iostream>

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

bool string::empty(){
    if (size_ == 0){
        return true;
    }
    return false;
}

/*string::string(){
}

string::string(.....){
  this->=;
  this->=;
  ....
}*/
