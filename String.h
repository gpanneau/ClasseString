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
    size_t size() const;
    size_t length() const;
    size_t capacity() const;
    const char* c_str() const;
    bool empty() const;
    //Setters
    void clear();
    //Constructors
    string(const char* s);
};

#endif //STRING_
