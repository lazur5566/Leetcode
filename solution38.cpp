//
//  solution38.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>

class Solution38 {
public:
    std::string countAndSay(int n) {
        if (n == 0) return "";
        std::string res = "1";
        while (--n) {
            std::string cur = "";
            for (int i = 0; i < res.size(); i++) {
                int count = 1;
                while ((i + 1 < res.size()) && (res[i] == res[i + 1])){
                    count++;
                    i++;
                }
                cur += std::to_string(count) + res[i];
            }
            res = cur;
        }
        return res;
    }
};
