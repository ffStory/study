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

void printReverseList(ListNode *head) {
    if (head == nullptr){return;}
    printReverseList(head);
    std::cout<<head->value<<std::endl;
}

void printTailToHead(ListNode* Head)
{
    if(Head == NULL)
        return;

    std::stack<ListNode*> s;
    ListNode* cur = Head;
    while(cur){
        s.push(cur);
        cur = cur->next;
    }

    //逆序打印
    while(!s.empty()){
        ListNode* top = s.top();
        std::cout<<top->value;
        s.pop();
    }
}

ListNode* ReverseList(ListNode* Head)
{
    if(Head == NULL)
        return NULL;

    ListNode* pre = NULL;
    ListNode* cur = Head;
    ListNode* newHead = NULL;
    while(cur){
        ListNode* Next = cur->next;

        //cur是最后一个节点，即新链表的头
        if(cur->next == NULL)
            newHead = cur;
        cur->next = pre;
        pre = cur;
        cur = Next;
    }
    return newHead;
}
