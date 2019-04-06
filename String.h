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
    size_t size();
    size_t length();
    size_t capacity();
    bool empty();
    //Setters
    void clear();
    //Constructeur
    /*string(); //default constructor*/
    string(const char* s);
};

#endif //STRING_
