//
//  solution657.cpp
//  Judge Route Circle
//
//  Created by lazur on 2018/3/28.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <string>
#include <iostream>
class Solution657 {
public:
    bool judgeCircle(std::string moves) {
        int x=0;
        int y=0;
        for (char c : moves){
            if (c=='R') x++;
            else if (c=='L') x--;
            else if (c=='U') y++;
            else if (c=='D') y--;
        }
        if (x==0 && y==0) return 1;
        else return 0;
    }
    void test(){
        std::cout << "657. Judge Route Circle" << std::endl;
        std::string S;
        std::cout << "cin move string" << std::endl;
        std::cin >> S;
        std::cout << "the ans is "<< judgeCircle(S)<< std::endl;
    }
};
