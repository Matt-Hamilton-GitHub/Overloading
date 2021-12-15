#ifndef _My_String__
#define _My_String__

class Mystring
{
private:
    char *str;
public:
Mystring();//Constructor
Mystring(const Mystring &source);//Copy constructor
Mystring(const char *s);// Overloading consructor
~Mystring();

Mystring &operator=(const Mystring &rhs); //Copy assignment

void display() const;
int get_length() const;
const char *get_str() const;
};



#endif // _My_String__
