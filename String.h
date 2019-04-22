#ifndef STRING_
#define STRING_

class string{
  protected:
    char* data_;/*Store the character table address of the string*/
    size_t size_;/*Store the string size*/
    size_t capacity_;/*Store the string capacity,
    i.e. the number of compartments allowed to the different characters inside the table of the string*/
    static size_t MAX_SIZE;/*Store the string maximum size*/

  public:
    //Getters
    const char* c_str() const;/*Returns a pointer to an array that contains
    a null-terminated sequence of characters (i.e., a C-string) representing
    the current value of the string object.
    This array includes the same sequence of characters that make up the value
    of the string object plus an additional terminating null-character ('\0') at the end.*/
    size_t size() const;/*Returns the length of the string, in terms of bytes.
    This is the number of actual bytes that conform the contents of the string,
    which is not necessarily equal to its storage capacity.
    Note that string objects handle bytes without knowledge of the encoding
    that may eventually be used to encode the characters it contains.
    Therefore, the value returned may not correspond to the actual number of encoded characters
    in sequences of multi-byte or variable-length characters (such as UTF-8).*/
    size_t length() const;/*Both string::size and string::length are synonyms
    and return the exact same value.*/
    size_t capacity() const;/*Returns the size of the storage space currently allocated for the string,
    expressed in terms of bytes.
    This capacity is not necessarily equal to the string length.
    It can be equal or greater, with the extra space allowing the object to optimize
    its operations when new characters are added to the string.
    Notice that this capacity does not suppose a limit on the length of the string.
    When this capacity is exhausted and more is needed,
    it is automatically expanded by the object (reallocating it storage space).
    The theoretical limit on the length of a string is given by member max_size.
    The capacity of a string can be altered any time the object is modified,
    even if this modification implies a reduction in size or if the capacity has not been exhausted
    (this is in contrast with the guarantees given to capacity in vector containers).
    The capacity of a string can be explicitly altered by calling member reserve.*/
    size_t max_size() const;/*Returns the maximum length the string can reach.
    This is the maximum potential length the string can reach due to known system
    or library implementation limitations, but the object is not guaranteed to be able to reach
    that length: it can still fail to allocate storage at any point before that length is reached.*/
    //Member functions
    void clear();/*Erases the contents of the string,
    which becomes an empty string (with a length of 0 characters).*/
    void resize (size_t n, char c);/*Resizes the string to a length of n characters.
    If n is smaller than the current string length,
    the current value is shortened to its first n character,
    removing the characters beyond the nth.
    If n is greater than the current string length,
    the current content is extended by inserting at the end as many characters as needed
    to reach a size of n. If c is specified, the new elements are initialized as copies of c,
    otherwise, they are value-initialized characters (null characters).*/
    void reserve (size_t n = 0);/* Requests that the string capacity be adapted to
    a planned change in size to a length of up to n characters.
    If n is greater than the current string capacity,
    the function causes the container to increase its capacity to n characters (or greater).
    In all other cases, it is taken as a non-binding request to shrink the string capacity:
    the container implementation is free to optimize otherwise and leave the string
    with a capacity greater than n.
    This function has no effect on the string length and cannot alter its content.*/
    bool empty() const;/*Returns whether the string is empty (i.e. whether its length is 0).*/
    //Constructors
    string();
    string(const char* s);
    string(const string& str);
    //Destructor
    ~string();
    //Operators
    /*operator= : assigns a new value to the string, replacing its current contents.*/
    string &operator=(char);
    string &operator=(const string);
    string &operator=(const char* s);
};

/*char* operator+(string str, char* c);*/

//Non member functions
/*operator+ : extends the string by appending additional characters at the end of its current value*/
static string operator+ (const string& lhs, const string& rhs){/*Concatenation of two strings*/
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

static string operator+(const string lhs, const char* rhs){/*Concatenation of a string with the table
localized at the address given.*/
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


static string operator+(const string& lhs, char rhs){/*Concatenation of a string and a single character*/
  char *temp;
  temp = new char[lhs.size()+2];
  int i=0;
  while (lhs.c_str()[i]!='\0') {
    temp[i]=lhs.c_str()[i];
    ++i;
  }
  temp[i]=rhs;
  temp[i+1]='\0';
  return string(temp);
}

#endif //STRING_
