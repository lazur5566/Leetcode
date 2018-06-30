//
//  solution344.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

class Solution344 {
public:
    std::string reverseString(std::string s) {
        std::string x(s);
        auto j = 0;
        for (auto i = s.size()-1; i!=-1; i--){
            x[j] = s[i];
            j++;
        }
        return x;
    }
    void test(){
        std::cout << "344. Number Complement" << std::endl;
        std::cout << "input arbitrary string" << std::endl;
        std::string in;
        //std::cin >> in;
        getline(std::cin, in);
        std::cout << in << std::endl;
        std::string ans;
        ans = reverseString(in);
        std::cout << "ans = "<<ans << std::endl;
    }
};
