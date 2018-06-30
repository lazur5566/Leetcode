//
//  solution136.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/6.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <vector>
#include <unordered_map>
class Solution136 {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> m;
        int one_time_key=0;
        for (auto num : nums){
            m.emplace(num,m[num]++);
        }
        for (std::unordered_map<int, int>::iterator it=m.begin(); it!=m.end(); it++){
            if (it->second==1)  one_time_key = it->first;
        }
        return one_time_key;
    }
    int singleNumber_v0(std::vector<int>& nums) {
        //std::unordered_map<int, int> m;
        //int one_time_key=0;
        int temp=0;
        for (auto num : nums){
            temp ^=num;
        }
        return temp;
    }
};
