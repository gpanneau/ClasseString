#ifndef STRING_
#define STRING_

class string{
  protected:
    char* data_;
    size_t size_;
    size_t capacity_;
    static size_t MAX_SIZE;
  public:
    //Getters
    char* data();
    size_t size();
    size_t capacity();
    //Setters
    //Constructeur
    string(); //default constructor
    string(.....);
};

#endif //STRING_ 

