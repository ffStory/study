//
//  main.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#include <iostream>
#include "Sort/Sort.hpp"
#include "Tree/BinaryTree.hpp"
using namespace std;

void testSrot(){
    int arr[] = {20,30,90,40,70,110,60,10,100,50,80};
    int len = (int) sizeof(arr) / sizeof(*arr);
    quickSort(arr, 0, len - 1);
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout<<endl;
}

void testBiTree(){
    cout << "创建二叉树"<<endl;
    BiTreeNode *tree = nullptr;
    createBiTree(tree);
    preOrder(tree);
}

void testList(){
    
}

class Base
{
public:
    Base() {
        cout<<"Base"<<endl;
    }
    ~Base() {
        cout<<"~Base"<<endl;
    }
    friend class FinalClass;
};
 
class FinalClass : virtual public Base
{
public:
    FinalClass() {
        cout<<"FinalClass"<<endl;
    }
    ~FinalClass() {
        cout<<"~FinalClass"<<endl;
    }
};

class Test: public FinalClass{
public:
    Test() {
        cout<<"Test"<<endl;
    }
    ~Test() {
        cout<<"~Test"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    cout<<sizeof(int)<<endl;

    return 0;
}
