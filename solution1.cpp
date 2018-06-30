//
//  solution1.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/12.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
// unordered_map.find(): when n to 1, find need to decide which iterator --> worst case O(n)
class Solution1 {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> appeared_map;
        //for (int n : nums){
        for (int i = 0 ; i<nums.size(); i++){
            if (appeared_map.find(target-nums[i])!=appeared_map.end()) {
                return std::vector<int>{i,appeared_map[target-nums[i]]};
            }
            appeared_map[nums[i]]=i;
        }
        return std::vector<int>{-1,-1};
    }
};
