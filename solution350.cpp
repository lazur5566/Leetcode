//
//  solution350.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/9.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
class Solution350 {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> nums1_map/*, nums2_map*/;
        std::vector<int> ans;
        for (int num: nums1){
            nums1_map[num] = (!nums1_map[num])? 1 : nums1_map[num]+1;
        }
        for (int num: nums2){
            if (nums1_map[num]-- >0) ans.push_back(num);
            //nums1_map[num] = (!nums2_map[num])? 1 : nums2_map[num]+1;
        }
        /*for (int num: nums1){
         if (nums1_map[num] && nums2_map[num]) {
         while(nums1_map[num] && nums2_map[num]){
         ans.push_back(num);
         nums1_map[num]--;
         nums2_map[num]--;
         }
         }
         }*/
        
        return ans;
        return ans;
    }
};
