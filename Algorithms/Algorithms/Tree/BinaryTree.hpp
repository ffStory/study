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
#include <unordered_map>
using namespace std;

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

//递归查找最近公共祖先
BiTreeNode* lowestCommonAncestorByRecursive(BiTreeNode* root, BiTreeNode* p, BiTreeNode* q);

//hashMap 实现公共父节点
class Solution {
public:
    //记录每个节点的父节点
    unordered_map<BiTreeNode*, BiTreeNode*> parentRecords;
    
    //节点路径
    unordered_map<BiTreeNode*, bool> vis;
    
    //递归遍历，初始化parentRecords
    void dfs(BiTreeNode* root){
        if (root->left != nullptr) {
            parentRecords[root->left] = root;
            dfs(root->left);
        }
        if (root->right != nullptr) {
            parentRecords[root->right] = root;
            dfs(root->right);
        }
    }
    BiTreeNode* lowestCommonAncestor(BiTreeNode* root, BiTreeNode* p, BiTreeNode* q) {
        parentRecords[root] = nullptr;
        dfs(root);
        while (p != nullptr) {
            vis[p] = true;
            p = parentRecords[p];
        }
        while (q != nullptr) {
            if (vis[q]) return q;
            q = parentRecords[q];
        }
        return nullptr;
    }
};
#endif /* BinaryTree_hpp */
