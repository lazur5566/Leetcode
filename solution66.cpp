//
//  solution66.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution66 {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(vector<int>::reverse_iterator i=digits.rbegin(); i!=digits.rend(); i++){
            
            *i+=carry;
            if (*i==10) {
                carry=1;
                *i=0;
            }
            else {
                carry=0;
            }
        }
        if (carry){
            vector<int> digits_a={1};
            digits_a.insert(digits_a.end(), digits.begin(), digits.end());
            return digits_a;
        }
        else return digits;
        
    }
    /*int n = digits.size();
    for (int i = n - 1; i >= 0; --i)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return;
        }
    }
    digits[0] =1;
    digits.push_back(0);*/
};
