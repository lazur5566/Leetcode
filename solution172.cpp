//
//  solution172.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
class Solution172 {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        return n/5+trailingZeroes(n/5);
    }
    
};
