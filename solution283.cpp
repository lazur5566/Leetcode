//
//  solutioin283.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/6.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
class Solution283 {
public:
    void moveZeroes(std::vector<int>& nums) {
        std::vector<int>::iterator it_last = nums.begin();
        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(*it!=0)  {std::iter_swap(it, it_last); it_last++;}
        }
    }
};
