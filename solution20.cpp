//
//  solution20.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include <string>
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> chars;
        for (char& c : s){
            if(c=='{'||c=='('||c=='[')
                chars.push(c);
            else if(!chars.empty()){
                if ((c=='}'&&chars.top()=='{')
                    ||(c==']'&&chars.top()=='[')
                    ||(c==')'&&chars.top()=='('))
                    chars.pop();
                else return false;
                
            }
            else return false;
        }
        return chars.empty();
    }
    /*stack<char> temp;
    map<char, char> m = { {']','['},{')','('},{'}','{'} };
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            temp.push(s[i]);
            else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
            {
                if (temp.empty()||temp.top() != m[s[i]]) return false;
                else temp.pop();
                    }
    }
    return temp.empty();*/
};
