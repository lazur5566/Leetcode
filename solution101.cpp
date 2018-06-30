//
//  solution101.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/12.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <queue>
 struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

class Solution101 {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        std::queue<TreeNode*> node_q;
        node_q.push(root->left);
        node_q.push(root->right);
        while(!node_q.empty()){
            TreeNode* node_1 = node_q.front();
            node_q.pop();
            TreeNode* node_2 = node_q.front();
            node_q.pop();
            if (!node_1 && !node_2)
                continue;
            else if ((!node_1 && node_2)||(node_1 && !node_2))
                return false;
            else if (node_1->val!=node_2->val)
                return false;
            
            node_q.push(node_1->left);
            node_q.push(node_2->right);
            node_q.push(node_1->right);
            node_q.push(node_2->left);
        }
        return true;
    }
    
    //return (!root || mirrorcheck(root->left, root->right));
    bool mirrorcheck(TreeNode* node_1, TreeNode* node_2){
        
        if (!node_1 && !node_2)
            return true;
        else if ((!node_1 && node_2)||(node_1 && !node_2))
            return false;
        else if (node_1->val!=node_2->val)
            return false;
        else return (mirrorcheck(node_1->left, node_2->right) && mirrorcheck(node_1->right, node_2->left));
        
    }
};
