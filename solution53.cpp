//
//  solution53.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/12.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <math.h>

class Solution53 {
public:
    int maxSubArray(std::vector<int>& nums) {
        int ans=nums[0],i,sum=0;
        for(i=0;i<nums.size();i++){
            sum=std::max(sum+nums[i], nums[i]);
            ans=std::max(sum,ans);
        }
        return ans;
    }
};
