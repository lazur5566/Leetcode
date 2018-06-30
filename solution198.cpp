//
//  solution198.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
//#include <math.h>
#include <algorithm>
class Solution198 {
public:
    int rob(std::vector<int>& nums) {
        int odd_max=0;
        int even_max=0;
        for (int i=0; i<nums.size(); i++){
            if (i%2==0) odd_max=std::max(odd_max+nums[i], even_max);
            else even_max = std::max(even_max+nums[i], odd_max);
        }
        return std::max(odd_max, even_max);
    }
    /* https://leetcode.com/problems/house-robber/discuss/55838/DP-O(N)-time-O(1)-space-with-easy-to-understand-explanation
    public int rob_ref(int[] num) {
     int prevNo = 0;
     int prevYes = 0;
     for (int n : num) {
     int temp = prevNo;
     prevNo = Math.max(prevNo, prevYes);
     prevYes = n + temp;
     }
     return Math.max(prevNo, prevYes);
    }*/
    
};
