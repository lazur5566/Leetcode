//
//  solution108.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/9.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>

 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution108 {
public:

    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return xx(nums.begin(), nums.end());
    }
    TreeNode* xx(std::vector<int>::iterator begin,  std::vector<int>::iterator end){
        int size = end-begin;
        if (size==1)
            return new TreeNode(*begin);
        if (size==0)
            return nullptr;
        
        std::vector<int>::iterator middle = begin+size/2;
        TreeNode* ans = new TreeNode(*middle);
        ans->left = xx(begin, middle);
        ans->right = xx(middle+1, end);
        return ans;
        
    }
};
