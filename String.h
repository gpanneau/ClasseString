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
    const char* c_str() const;
    size_t size() const;
    size_t length() const;
    size_t capacity() const;
    size_t max_size() const;
    bool empty() const;
    //Setters
    void clear();
    void resize (size_t n, char c);
    //Constructors
    string(const char* s);
    copy(const string& str);
    //Destructor
    ~string();
};

#endif //STRING_
