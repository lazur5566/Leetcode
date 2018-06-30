//
//  solution104.cpp
//  Maximum Depth of Binary Tree
//
//  Created by lazur on 2018/4/6.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <queue>
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return step_1_depth(root, 0);
    }
    int step_1_depth(TreeNode* root, int d){
        if (root==NULL) return d;
        d++;
        return std::max(step_1_depth(root->left, d), step_1_depth(root->right, d));

    }
    int maxDepth_dfs(TreeNode *root)
    {
        return root == NULL ? 0 : std::max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
    }
    int maxDepth_bfs(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int res = 0;
        std::queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            ++ res;
            for(int i = 0, n = q.size(); i < n; ++ i)
            {
                TreeNode *p = q.front();
                q.pop();
                
                if(p -> left != NULL)
                    q.push(p -> left);
                if(p -> right != NULL)
                    q.push(p -> right);
            }
        }
        
        return res;
    }
};
