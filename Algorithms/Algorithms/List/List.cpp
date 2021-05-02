//
//  List.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#include "List.hpp"
#include <iostream>
#include <stack>

ListNode* createList(int len){
    ListNode* head = new ListNode();//创建头结点
    head->value = len;
    
    ListNode* curr = head;
    for (int i = 0; i < len; ++i) {
        ListNode* temp = new ListNode();
        temp->value = i;
        temp->next = nullptr;
        curr->next = temp;
        curr = temp;
    }
    return head;
}

void printList(ListNode* head){
    ListNode* curr = head->next; //打印跳过头结点
    while (curr) {
        std::cout<<curr->value<<std::endl;
        curr = curr->next;
    }
}

//递归的方式会把头结点打印出来
void reversePrintByRecursion(ListNode *head) {
    if (head == nullptr){return;}
    reversePrintByRecursion(head->next);
    std::cout<<head->value<<std::endl;
}

void reversePrintByStack(ListNode* head)
{
    if(head == nullptr)
        return;

    std::stack<ListNode*> s;
    ListNode* cur = head->next; //打印跳过头结点
    while(cur){
        s.push(cur);
        cur = cur->next;
    }

    //逆序打印
    while(!s.empty()){
        ListNode* top = s.top();
        std::cout<<top->value<<std::endl;
        s.pop();
    }
}


ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head->next; //头结点下一个结点才是数据
    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = prev; //头结点指向最后一个节点
    return head;
}

// ListNode* reverseListByRecursion(ListNode* head) {
//    if (head == nullptr || head->next == nullptr) {
//        return head;
//    }
//    ListNode* newHead = reverseList(head->next);
//    head->next->next = head;
//    head->next = nullptr;
//    return newHead;
//}

bool hasCycleBySet(ListNode *head) {
    std::unordered_set<ListNode*> seen;
    while (head != nullptr) {
        if (seen.count(head)) {
            return true;
        }
        seen.insert(head);
        head = head->next;
    }
    return false;
}

bool hasCycleByPtr(ListNode* head) {
//    if (head == nullptr || head->next == nullptr) {
//        return false;
//    }
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast == nullptr || fast->next == nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow){
            return true;
        }
    }
    return false;
}

ListNode* getKthFromEnd(ListNode* head, int k){
    ListNode *slow = head;
    ListNode *fast = head;
    int t = 0;
    while (fast != nullptr) {
        if (t >= k){
            slow = slow->next;
        }
        fast = fast->next;
        t++;
    }
    return slow;
}


void deleteNode(ListNode *head, int n){
    
}
void insertNode(ListNode *head, ListNode *node){
    
}

//思路：公共部分长度为c;两个链表单独长度分别为a,b;两个链表走的路程为：a+c+b = b+c+a 相遇；
ListNode* checkIntersect(ListNode* headA, ListNode* headB){
    ListNode *node1 = headA;
    ListNode *node2 = headB;
    
    while (node1 != node2) {
        node1 = node1 != NULL ? node1->next : headB;
        node2 = node2 != NULL ? node2->next : headA;
    }
    return node1;
}
