//
//  solution122.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>

class Solution122 {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.size()==0) return 0;
        int local_min = prices[0];
        int local_max = prices[0];
        int cur_price = prices[0];
        int pre_price = prices[0];
        int dir; // 1 for upward, 0 for downward
        int profit=0;
        
        for (int p : prices) {
            cur_price = p;
            if (dir==0 && cur_price > pre_price) {//local_min=pre_price;
            }
            if (dir==1 && cur_price < pre_price) {
                //local_max=pre_price;
                profit+=local_max-local_min;
            }
            if (cur_price > pre_price) {local_max=cur_price; dir=1;}
            if (cur_price < pre_price) {local_min=cur_price; dir=0;}
            
            pre_price = p;
        }
        if (local_max==prices[prices.size()-1]) profit+=local_max-local_min;
        return profit;
    }
    //if (prices[i+1]>prices[i]) total += prices[i+1]-prices[i]; ...


};
