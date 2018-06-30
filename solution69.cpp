//
//  solution69.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/22.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
class Solution69 {
public:
    int mySqrt(int x) {
        long r = x;
        while (r*r > x)
            r = (r + x/r) / 2;
        return r;
    }
};
