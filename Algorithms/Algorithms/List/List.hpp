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

//递归打印逆序链表
void reversePrintByRecursion(ListNode* head);
//栈结构打印逆序链表
void reversePrintByStack(ListNode* Head);

//递归逆序链表
ListNode* reverseListByRecursion(ListNode* head);
//逆序链表
ListNode* reverseList(ListNode* head);

//判断是否有环,根据哈希表
bool hasCycleBySet(ListNode *head);
//判断是否有环,根据快慢指针
bool hasCycleByPtr(ListNode *head);

#endif /* List_hpp */
