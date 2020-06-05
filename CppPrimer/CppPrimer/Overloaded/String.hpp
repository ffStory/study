//
//  String.hpp
//  CppPrimer
//
//  Created by FD on 2020/5/27.
//  Copyright © 2020 FD. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <iostream>

class String {
    friend std::ostream& operator<<(std::ostream& os, const String& str);
    friend std::istream& operator>>(std::istream& in, String& str);
public:
    String(const char*);
    String(const String&);
    String& operator=(const String&);
    ~String(){
        delete[] rep;
        rep = nullptr;
    };
    
    char& operator[](int);
    const char& operator[](int)const;
    
private:
    size_t len;
    char *rep;
};



#endif /* String_hpp */
