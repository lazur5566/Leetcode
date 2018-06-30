//
//  solution806.cpp
//  Number of Lines To Write String
//
//  Created by lazur on 2018/3/28.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>

class Solution806 {
public:
    std::vector<int> numberOfLines(std::vector<int>& widths, std::string S) {
        // line limitation: 100 unit
        std::vector<int> ans = {0, 0}; // lines, number of units in last line
        int line_budget = 100;
        //for (std::string::iterator it = S.begin(); it != S.end(); ++it){
        for (std::string::size_type i = 0; i < S.size(); ++i){
            line_budget-=widths[S[i]-'a'];
            //std::cout << "S[i] = " << S[i] << std::endl;
            //std::cout << "width[S[i]-'a'] = " << widths[S[i]-'a'] << std::endl;
            if (line_budget<0) {
                line_budget=100-widths[S[i]-'a'];
                ans[0]++;
            }
        }
        if (line_budget!=0) ans[0]++;
        ans[1] = 100-line_budget;
        return ans;
    }
    void test(){
        std::cout << "806. Number of Lines To Write String" << std::endl;
        std::string S; //a~z
        std::vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
        std::cout << "cin a~z string" << std::endl;
        std::cin >> S;
        std::vector<int> ans = numberOfLines( widths, S);
        std::cout << "the line number is "<< ans[0] << std::endl;
        std::cout << "the units used in last line is "<< ans[1] << std::endl;
    }
};
