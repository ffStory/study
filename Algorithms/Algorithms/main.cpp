//
//  main.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#include <iostream>
#include "Sort/Sort.hpp"
#include "List/List.hpp"
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
    BiTreeNode *tree = createBiTree();
//    levelOder(tree);
    levelOder(tree);
}

void testList(){
    ListNode* head = createList(5);
//    reverseList(head);
//    printList(head);
    ListNode* kthNode = getKthFromEnd(head, 2);
    cout<<kthNode->value<<endl;
}

int main(int argc, const char * argv[]) {
    testBiTree();
    return 0;
}
