//
//  solution575.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/5.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <algorithm>
//#include <math.h>
using namespace std;
class Solution575 {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> kinds(candies.begin(),candies.end());
        //for(auto candy:candies){
        //    kinds.insert(candy);
        //}
        return min((candies.size()/2),kinds.size());
    }
};
