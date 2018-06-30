//
//  solution326.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/11.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <cmath>
class Solution {
public:
    bool isPowerOfThree(int n) {
        //if (n<=0) return 0;
        //if (n==1) return 1;
        //else return (n%3==0)&&isPowerOfThree(n/3);
        return n>0 && (n==1 || (n%3==0 && isPowerOfThree(n/3)));
        //return fmod(log10(n)/log10(3), 1)==0;
    }
};


