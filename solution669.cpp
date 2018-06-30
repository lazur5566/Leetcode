//
//  solution669.cpp
//  Trim a Binary Search Tree
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root==nullptr){
            return nullptr;
        }
        else if (root->val<=R && root->val>=L) {
            root->left=trimBST(root->left, L, R);
            root->right=trimBST(root->right, L, R);
            return root;
        }
        else if (root->val>R){
            return trimBST(root->left, L, R);
        }
        else if (root->val<L){
            return trimBST(root->right, L, R);
        }
        else return nullptr;
    }
};
