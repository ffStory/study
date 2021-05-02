//
//  List.hpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <unordered_set>
struct ListNode {
    int value;
    ListNode *next;
};

//创建带头结点的链表
ListNode* createList(int len);

void printList(ListNode* head);

void deleteNode(ListNode *head, int n);
void insertNode(ListNode *head, ListNode *node);

//递归打印逆序链表
void reversePrintByRecursion(ListNode* head);
//栈结构打印逆序链表
void reversePrintByStack(ListNode* Head);

//递归逆序链表
//ListNode* reverseListByRecursion(ListNode* head);
//逆序链表
ListNode* reverseList(ListNode* head);

//判断是否有环,根据哈希表
bool hasCycleBySet(ListNode *head);
//判断是否有环,根据快慢指针
bool hasCycleByPtr(ListNode *head);

//获得倒数第k戈节点
//第一种方式：想办法获得链表总长度，然后去n-k个节点
//第二种方式：通过栈
//第三种方式：快慢指针
ListNode* getKthFromEnd(ListNode* head, int k);

//检查两个单链表是否相交，并且返回入口
ListNode* checkIntersect(ListNode* a, ListNode* b);
#endif /* List_hpp */
