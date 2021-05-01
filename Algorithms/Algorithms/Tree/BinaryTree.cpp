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

BiTreeNode* createBiTree() {
    BiTreeNode *tree = new BiTreeNode();
    tree->value = 1;
    
    BiTreeNode *leftChild = new BiTreeNode();
    leftChild->value = 2;
    BiTreeNode *rightChild = new BiTreeNode();
    rightChild->value = 3;
    tree->left = leftChild;
    tree->right = rightChild;
    
    BiTreeNode *ll = new BiTreeNode();
    ll->value = 4;
    BiTreeNode *lr = new BiTreeNode();
    lr->value = 5;
    BiTreeNode *rl = new BiTreeNode();
    rl->value = 6;
    BiTreeNode *rr = new BiTreeNode();
    rr->value = 7;
    leftChild->left = ll;
    leftChild->right = lr;
    rightChild->left = rl;
    rightChild->right = rr;
    
    BiTreeNode *lll = new BiTreeNode();
    lll->value = 8;
    BiTreeNode *llr = new BiTreeNode();
    llr->value = 9;
    BiTreeNode *lrl = new BiTreeNode();
    lrl->value = 10;
    BiTreeNode *lrr = new BiTreeNode();
    lrr->value = 11;
    leftChild->left->left = lll;
    leftChild->left->right = llr;
    leftChild->right->left = lrl;
    leftChild->right->right = lrr;
    return tree;
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
            std::cout<<t->value<<" ";
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
        inOrderRecursive(tree->left);
        std::cout << tree->value << " ";
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
        std::cout<<t->value<<" ";
        st.pop();
        t = t->right;
 
    }
}

// 后序遍历-递归
void postOrderRecursive(BiTreeNode *tree) {
    if (tree) {
        postOrderRecursive(tree->left);
        postOrderRecursive(tree->right);
        std::cout << tree->value << " ";
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
            std::cout << p->value << " ";
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
        std::cout << temp->value<<" ";
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

BiTreeNode* lowestCommonAncestorByRecursive(BiTreeNode* root, BiTreeNode* p, BiTreeNode* q) {
    //跳出条件：!root表示上个节点是叶子节点；(root == p || root == q)表示一旦递归到p或q，就不会再去找他们的子节点
    if (!root || root == p || root == q) return root;
    
    //先递归左子树
    BiTreeNode *left = lowestCommonAncestorByRecursive(root->left, p, q);
    //在递归右子树
    BiTreeNode *right = lowestCommonAncestorByRecursive(root->right, p, q);
    
    //如果在左右子树中都找到一个节点，则root为最近祖先节点。因为递归是从下往上找的
    if (left && right) return root;
    
    //如果左或者右子树找到一个节点，向上传递这个节点；可以传递nullptr
    return left ? left : right;
}
