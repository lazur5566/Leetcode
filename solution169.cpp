//
//  solution169.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int i=0;
        int cur_max;
        for (int num : nums){
            if (i==0){ cur_max=num; i++;}
            else if (num==cur_max) i++;
            else i--;
        }
        return cur_max;
    }
};
