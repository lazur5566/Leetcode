//
//  solution171.cpp
//  Excel Sheet Column Number
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <string>
#include <algorithm>
#include <math.h>
#include <stdio.h>
class Solution171 {
public:
    int titleToNumber(std::string s) {
        int ret = 0;
        int offset = pow(26,(s.length()-1));
        for (char c : s){
            //if (offset==0) offset=1;
            ret+=(c-'A'+1)*offset;
            offset/=26;
        }
        return ret;
    }
    //ref solution
    //int result = 0;
    //for (int i = 0; i < s.size(); result = result * 26 + (s.at(i) - 'A' + 1), i++);
    //return result;
};
