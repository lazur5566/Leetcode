//
//  solution217.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>

class Solution217 {
public:
    /*bool containsDuplicate(std::vector<int>& nums) {
        //if nums.size();
        std::unordered_map<int, int> n_map;
        int rec=0;
        int zero_cnt=0;
        for (int n:nums){
            if (!n_map[n]) {
                n_map[n]=1;
                rec^=n;
            }
            else if (n_map[n]==1){
                n_map[n]+=1;
                rec^=n;
            }
            if (n==0) zero_cnt++;
        }
        return (!rec && nums.size() && (!zero_cnt || zero_cnt>=2));
    }*/
    bool containsDuplicate(std::vector<int>& nums) {
        if (nums.size()==0) return false;
        std::unordered_set<int> n_set;
        for (int n:nums){
            if (n_set.count(n)) return true;
            n_set.emplace(n);
        }
        
        return (false);
    }
};
