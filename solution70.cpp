//
//  solution70.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/11.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
class Solution70 {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int a = 1,b = 2,c;
        for(int i=3;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    
};
/*class Solution70_2 {
public:
    unordered_map<int, int> save;
    int climbStairs(int n) {
        if (n<=2) return n;
        if (save[n]) return save[n];
        return save[n] = (climbStairs(n-1)+climbStairs(n-2));
    }
};*/
