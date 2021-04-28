//
//  StringTools.h
//  CppPrimer
//
//  Created by lilithgames on 2021/4/28.
//  Copyright © 2021 FD. All rights reserved.
//

#ifndef StringTools_h
#define StringTools_h

char* Strcpy(char* dst, const char* src){
    if (dst == nullptr || src == nullptr){
        return dst;;
    }
    if (dst == src){
        return dst;
    }
    while ((*dst++ = *src++) != '\0');
    return dst;
}
char* Strcat(char* dst, const char* src){
    if (dst == nullptr || src == nullptr){
        return dst;
    }
    while (*dst != '\0') {
        dst++;
    }
    while ((*dst++ = *src++) != '\0');
    return dst;
}

int Strlen(const char* str){
    if (str == nullptr){
        return 0;
    }
    int len = 0;
    while ((*str++) != '\0') {
        len++;
    }
    return len;
}

int Strcmp(const char* str1, const char* str2){
    assert((str1 != nullptr)&&(str2 != nullptr));
    while (*str1 == *str2) {
        if (*str1 == '\0'){
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

#endif /* StringTools_h */
