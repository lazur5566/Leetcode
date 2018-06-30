//
//  solution189.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/30.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%(nums.size());
        Reverse(nums,0,nums.size()-k-1);
        Reverse(nums,nums.size()-k,nums.size()-1);
        Reverse(nums,0,nums.size()-1);
        
    }
    void Reverse(vector<int>& nums,int start,int end)
    {
        for(;start<end;start++,end--)
        {
            int s= nums[start];
            nums[start]=nums[end] ;
            nums[end] = s;
        }
    }
};
