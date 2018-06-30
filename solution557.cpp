//
//  solution557.cpp
//  Reverse Words in a String III
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
class Solution557 {
public:
    std::string reverseWords(std::string s) {
        //std::string x(s);
        std::string temp;
        std::string ans;
        //auto j = 0;
        for (auto i = 0; i!=s.length(); i++){
            if (s[i]==' '){
                for (auto j = temp.length()-1; j!=-1; j--){
                    ans+=temp[j];
                }
                ans+=' ';
                temp.clear();
            }
            else {
                temp += s[i];
            }
        }
        for (auto j = temp.length()-1; j!=-1; j--){
            ans+=temp[j];
        }
        return ans;
    }
    void test(){
        std::cout << "557. Reverse Words in a String III" << std::endl;
        std::cout << "input arbitrary string" << std::endl;
        std::string in;
        //std::cin >> in;
        getline(std::cin, in);
        std::cout << in << std::endl;
        std::string ans;
        ans = reverseWords(in);
        std::cout << "ans = "<<ans << std::endl;
    }
};
