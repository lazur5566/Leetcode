//
//  solution26.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
class Solution26 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        for (std::vector<int>::iterator i=nums.begin(); i!=nums.end(); i++){
            //int cnt=1;
            while((i+1)!=nums.end() && (*i==*(i+1))){
                //if (cnt>1)
                //i++;
                //cnt++;
                nums.erase(i);
            }
        }
        return nums.size();
    }
    int removeDuplicates_ref(std::vector<int>& nums) {
        
        if (nums.size() == 0)return 0;
        int ptr = 0;
        
        for (int i=1;i<nums.size();i++)
        {
            if (nums[ptr]!=nums[i])
            {
                nums[++ptr] = nums[i];
            }
        }
        
        return ptr+1;
    }
};
