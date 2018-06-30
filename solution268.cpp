//
//  solution268.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/9.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
class Solution268 {
public:
    int missingNumber(std::vector<int>& nums) {
        int ideal_sum = nums.size()*(nums.size()+1)/2;
        int actual_sum=0;
        for (int n:nums)
            actual_sum+=n;
        
        return (ideal_sum-actual_sum);
    }
    /*int result = nums.size();
    int i=0;
    
    for(int num:nums){
        result ^= num;
        result ^= i;
        i++;
    }
    
    return result;*/
};
