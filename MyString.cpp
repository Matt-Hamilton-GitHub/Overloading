#include "MyString.h"
#include <cstring>
#include <iostream>

Mystring::Mystring()
:str{nullptr}{ //str points to null pointer(default)
    str = new char [1];//allocate str to a char array with one object
    *str = '\0';//set str equal to \0
}

Mystring::Mystring(const char *s)
 : str{nullptr}{
     if(s==nullptr){
         str = new char [1];
         *str = '\0';
     }else{
         str = new char [std::strlen(s) + 1];//declaring space that needs for your array + 1
         std::strcpy(str, s);
     }
 }   

Mystring::Mystring(const Mystring &source)
: str{nullptr}{
    str = new char [std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::~Mystring(){
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "The copy assignment has been called " << std::endl;
    if (this == &rhs)
        return *this;
    delete []this-> str;
        
    str = new char [std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const{ return strlen(str);}
const char  *Mystring::get_str() const {return str;}
