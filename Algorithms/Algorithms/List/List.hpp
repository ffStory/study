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

struct ListNode {
    int value;
    ListNode *next;
};

//链表逆序
void printReverseList(ListNode *head);
#endif /* List_hpp */
