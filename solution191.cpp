//
//  solution191.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/11.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
class Solution191 {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n){
            cnt+=1;
            n=n&(n-1);
        }
        return cnt;
    }
};
