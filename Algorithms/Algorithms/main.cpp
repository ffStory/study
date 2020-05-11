//
//  main.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#include <iostream>
#include "Sort/sort.hpp"
using namespace std;

void testSrot(){
    int arr[] = {20,30,90,40,70,110,60,10,100,50,80};
    int len = (int) sizeof(arr) / sizeof(*arr);
    quickSort(arr, 0, len - 1);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    testSrot();
    return 0;
}
