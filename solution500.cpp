//
//  solution500.cpp
//  Keyboard Row
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <vector>
#include <string>
#include <set>
#include <iostream>
class Solution500 {
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::set<char> first_row = {'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
        std::set<char> second_row = {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        std::set<char> third_row = {'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        std::vector<std::string> avail_words;
        int is_first_row;
        int is_second_row;
        int is_third_row;
        for (std::string word : words){
            is_first_row = 0;
            is_second_row = 0;
            is_third_row = 0;
            for (char c : word){
                if (first_row.count(c)) is_first_row = 1;
                if (second_row.count(c)) is_second_row = 1;
                if (third_row.count(c)) is_third_row = 1;
            }
            if ((is_first_row+is_second_row+is_third_row)==1) avail_words.push_back(word);
        }
        return avail_words;
    }
    void test(){
        std::cout << "500. Keyboard Row" << std::endl;
        std::cout << "input 3 strings" << std::endl;
        std::vector<std::string> test_in;
        std::string in_str;
        getline(std::cin, in_str);
        test_in.push_back(in_str);
        getline(std::cin, in_str);
        test_in.push_back(in_str);
        getline(std::cin, in_str);
        test_in.push_back(in_str);
        std::vector<std::string> ans = findWords(test_in);
        for (auto ans_o : ans) {
            std::cout << ans_o << std::endl;
        }
    }
};
