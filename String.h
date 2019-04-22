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
    //Member functions
    void clear();
    void resize (size_t n, char c);
    void reserve (size_t n = 0);
    bool empty() const;
    //Constructors
    string();
    string(const char* s);
    string(const string& str);
    //Destructor
    ~string();
    //Operators
    string &operator=(char);
    string &operator=(const string);
    string &operator=(const char* s);
};

/*char* operator+(string str, char* c);*/

//Non member functions
static string operator+ (const string& lhs, const string& rhs){
  char* temp;
  temp = new char[lhs.size()+rhs.size()];
  int i=0;
  while (lhs.c_str()[i]!='\0') {
    temp[i]=lhs.c_str()[i];
    ++i;
  }
  int j=0;
  while (rhs.c_str()[j]!='\0') {
    temp[i]=rhs.c_str()[j];
    ++i; ++j;
  }
  temp[i]='\0';
  return string(temp);
}



static string operator+(const string lhs, const char* rhs){
  char *temp;
  temp=new char[100+1];
  int i=0;
  while (lhs.c_str()[i]!='\0' && i!=100){
    temp[i]=lhs.c_str()[i];
    ++i;
  }
  int j=0;
  while (rhs[j]!='\0' && i!=100){
    temp[i]=rhs[j];
    ++i;
    ++j;
  }
  temp[i+1]='\0';
  string str(temp);
  return str;
}

static string& operator+(const string& lhs, char rhs){
  char *temp;
  temp = new char[lhs.size()+2]
  while (lhs.c_str()[i]!='\0') {
    temp[i]=lhs.c_str()[i];
    ++i;
  }
  temp[i]=rhs;
  temp[i+1]='\0';
  return string(temp);
}

#endif //STRING_
