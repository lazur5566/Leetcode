//
//  solution14.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/15.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>

class Solution14 {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        std::string str1 = strs[0];
        if (str1 == "") return "";
        for (int i = 1; i < strs.size(); ++i) {
            std::string str2 = strs[i];
            if (str2 == "") return "";
            int ind = 0;
            while (ind < str1.length() && str1[ind] == str2[ind]) ind++;
            str1 = str1.substr(0, ind);
        }
        return str1;
    }
};
