//
//  solution242.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
class Solution242 {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        std::vector<int> chars(256,0);
        for(int i=0;i<s.size();i++)
        {
            chars[s.at(i)]++;
            
        }
        for(int j=0;j<t.size();j++)
        {
            chars[t.at(j)]--;
        }
        for(int k=0;k<chars.size();k++)
        {
            
            if(chars[k]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
