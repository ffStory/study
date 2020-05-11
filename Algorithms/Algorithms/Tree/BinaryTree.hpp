//
//  BinaryTree.hpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>

struct BiTreeNode {
    int value;
    BiTreeNode *left;
    BiTreeNode *right;
};

void createBiTree(BiTreeNode* tree);
void preOrder(BiTreeNode *tree);
void inOrder(BiTreeNode *tree);
void posOrder(BiTreeNode *tree);

#endif /* BinaryTree_hpp */
