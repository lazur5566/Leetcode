//
//  solution13.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <unordered_map>
#include <string>
using namespace std;
class Solution13 {
public:

int romanToInt(string s)
{
    unordered_map<char, int> T = {
        { 'I' , 1 },
        { 'V' , 5 },
        { 'X' , 10 },
        { 'L' , 50 },
        { 'C' , 100 },
        { 'D' , 500 },
        { 'M' , 1000 } };
    
    int sum = T[s.back()];
    for (int i = s.length() - 2; i >= 0; --i)
    {
        if (T[s[i]] < T[s[i + 1]])
        {
            sum -= T[s[i]];
        }
        else
        {
            sum += T[s[i]];
        }
    }
    
    return sum;
}
};
