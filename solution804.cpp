//
//  solution804.cpp
//  804. Unique Morse Code Words
//
//  Created by lazur on 2018/3/26.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <vector>
#include <set>
#include <string>
#include <iostream>

class Solution804 {
public:
    size_t uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::vector <std::string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        std::set <std::string> ans;
        for (std::string word : words){
            std::string code;
            for (char c : word){
                code+=d[c-'a'];
            }
            ans.insert(code);
        }
        return ans.size();
    }
    void test(){
        std::cout << "804. Unique Morse Code Words" << std::endl;
        std::vector <std::string> test = {"gin", "zen", "gig", "msg"};
        Solution804 zz;
        std::cout << "ans: "<< zz.uniqueMorseRepresentations(test) << std::endl;
        std::cout << "804 done" << std::endl;
    }
};
