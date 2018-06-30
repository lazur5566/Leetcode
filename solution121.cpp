//
//  solution121.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/9.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
class Solution121 {
public:
    int maxProfit(std::vector<int>& prices) {
        if(prices.empty() || prices.size() < 2) return 0;
        int maxProfit = 0, minPrice = prices[0];
        
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                maxProfit = std::max(maxProfit, prices[i] - minPrice);
            } else {
                minPrice = std::min(minPrice, prices[i]);
            }
        }
        
        return maxProfit;
    }
};
