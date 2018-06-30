//
//  solution561.cpp
//  Array Partition I
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0;
        for (auto i=0; i<nums.size(); i+=2){
            sum+=nums[i];
        }
        return sum;
    }
    int arrayPairSum_brilliant(std::vector<int>& nums) {
        std::vector<int> hash(20001, 0); // 20001 elements with value 0
        
        for (auto num : nums)
        {
            ++hash[num + 10000]; // record all nums with hash[0:2000]
        }
        
        auto sum = 0;
        auto token = 1;
        for (int i = 0; i <= 20000; ++i) // sweep all hash[0:20000]
        {
            while (hash[i]--)
            {
                --token;
                if (!token)
                {
                    sum += (i-10000);
                    token = 2;
                }
            }
        }
        
        return sum;
    }
};
