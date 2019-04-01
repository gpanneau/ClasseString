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
    static size_t max_size();
    //Setters
    //Constructeur
    /*string();
    string(.....);*/
};

#endif //NODE_ 

