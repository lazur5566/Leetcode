//
//  solution190.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/15.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
class Solution190 {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m=0;
        for(int i=0; i<32; i++){
            m|=n&1;
            n>>=1;
            if(i<31) m<<=1;
        }
        return m;
    }
};
