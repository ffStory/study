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

BiTreeNode* createBiTree();

//广度优先遍历用递归或者栈。深度优先遍历用队列
//前序遍历：根结点 ---> 左子树 ---> 右子树
void preOrderRecursive(BiTreeNode *tree);
void preOrder(BiTreeNode *tree);

//中序遍历：左子树---> 根结点 ---> 右子树
void inOrderRecursive(BiTreeNode *tree);
void inOrder(BiTreeNode *tree);

//后序遍历：左子树 ---> 右子树 ---> 根结点
void postOrderRecursive(BiTreeNode *tree);
void postOrder(BiTreeNode *tree);

//层次遍历：只需按层次遍历即可
void levelOder(BiTreeNode *tree);
#endif /* BinaryTree_hpp */
