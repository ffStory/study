//
//  BinaryTree.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//
#include <iostream>
#include <queue>
#include <stack>
#include "BinaryTree.hpp"

void createBiTree(BiTreeNode *tree) {
    int value;
    std::cin >> value;
    if(value != '*')
    {
            tree = new BiTreeNode();
            tree->value = value;
            createBiTree(tree->left);//创建左子树
            createBiTree(tree->right);//创建右子树
    }
    else // value==* 表示NULL
    {
            tree = NULL;
    }
}

// 先序遍历-递归
void preOrderRecursive(BiTreeNode *tree) {
    if (tree) {
        std::cout << tree->value << " ";
        preOrderRecursive(tree->left);
        preOrderRecursive(tree->right);
    }
}


void preOrder(BiTreeNode *root)
{
    std::stack<BiTreeNode*> st;
    BiTreeNode *t = root;
    while (t || !st.empty())
    {
        while (t)
        {
            st.push(t);
            printf("%c ", t->value);
            t = t->left;
        }
        t = st.top();
        st.pop();
        t = t->right;
 
    }
}

// 中序遍历-递归
void inOrderRecursive(BiTreeNode *tree) {
    if (tree) {
        std::cout << tree->value << " ";
        inOrderRecursive(tree->left);
        inOrderRecursive(tree->right);
    }
}

void inOrder(BiTreeNode *root)
{
    std::stack<BiTreeNode*> st;
    BiTreeNode *t = root;
    while (t || !st.empty())
    {
        while (t)
        {
            st.push(t);
            t = t->left;
        }
        t = st.top();
        printf("%c ", t->value);
        st.pop();
        t = t->right;
 
    }
}

// 后序遍历-递归
void posOrderRecursive(BiTreeNode *tree) {
    if (tree) {
        std::cout << tree->value << " ";
        posOrderRecursive(tree->left);
        posOrderRecursive(tree->right);
    }
}


void postOrder(BiTreeNode *root)
{
    if(root == NULL) return ;
 
    BiTreeNode *p = root;
    std::stack<BiTreeNode*> sta;
    BiTreeNode *last = root;
    sta.push(p);
    while (!sta.empty())
    {
        p = sta.top();
        if( (p->left == NULL && p->right == NULL) || (p->right == NULL && last == p->left) || (last == p->right) )
        {
            printf("%c ", p->value);
            last = p;
            sta.pop();
        }
        else
        {
            if(p->right)
                sta.push(p->right);
            if(p->left)
                sta.push(p->left);
        }
    }
}

// 层级遍历
void levelOder(BiTreeNode *tree){
    std::queue<BiTreeNode*> q;
    if(tree)
        q.push(tree);
    while(!q.empty())
    {
        BiTreeNode* temp = q.front();
        std::cout << tree->value<<std::endl;
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}


// 寻找最近父节点
//class Solution {
//public:
//    BiTreeNode* ans;
//    bool dfs(BiTreeNode* root, BiTreeNode* p, BiTreeNode* q) {
//        if (root == nullptr) return false;
//        bool lson = dfs(root->left, p, q);
//        bool rson = dfs(root->right, p, q);
//        if ((lson && rson) || ((root->value == p->value || root->value == q->value) && (lson || rson))) {
//            ans = root;
//        }
//        return lson || rson || (root->value == p->value || root->value == q->value);
//    }
//    BiTreeNode* lowestCommonAncestor(BiTreeNode* root, BiTreeNode* p, BiTreeNode* q) {
//        dfs(root, p, q);
//        return ans;
//    }
//};
