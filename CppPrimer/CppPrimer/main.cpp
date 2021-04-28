//
//  main.cpp
//  CppPrimer
//
//  Created by FD on 2020/5/27.
//  Copyright © 2020 FD. All rights reserved.
//

#include <iostream>
#include "String.hpp"
#include "StringTools.h"
using namespace std;

int main(int argc, const char * argv[]) {

    char a[6] = "hello";
    char b[12] = "11111";
    Strcmp(a, b);
    cout<<Strlen(a)<<strlen(a)<<sizeof(a);
    return 0;
}
