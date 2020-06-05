//
//  String.cpp
//  CppPrimer
//
//  Created by FD on 2020/5/27.
//  Copyright © 2020 FD. All rights reserved.
//

#include "String.hpp"
#include <iostream>

using namespace std;

//构造函数
String::String(const char* ch){
    if (!ch){
        len = 0;
        rep=new char[1];
        strcpy(rep,"");
    }else{
        len = strlen(ch);
        rep = new char[len + 1];
        strcpy(rep, ch);
    }
}

//拷贝构造
String::String(const String& str){
    len = str.len;
    rep = new char[len + 1];
    strcpy(rep, str.rep);
}

//赋值拷贝
String& String::operator=(const String& str){
    //先判断自赋值
    if (this != &str){
        delete[] rep;  //删除旧空间
        len = str.len;
        rep = new char[len + 1];  //开辟新空间
        strcpy(rep, str.rep);  //赋值
    }
    return *this;
}

//下标重载
char& String::operator[](int index){
    return rep[index];
}

const char& String::operator[](int index)const{
    return rep[index];
}

ostream& operator<<(ostream& os, const String& str){
    cout<<str.rep<<endl;
    return os;
}

istream& operator>>(istream& in, String& str){
    delete [] str.rep;
    char b[100];
    std::cin>>b;
    str.len = strlen(b);
    str.rep = new char[str.len + 1];
    strcpy(str.rep, b);
    return in;
}
