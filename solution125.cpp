//
//  solution125.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/29.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution125 {
public:
    bool isPalindrome(string s) {
        int i = 0;
        string temp ;
        for (;i<s.length();i++) {
            if(((s[i]<='z')&&(s[i]>='a'))||((s[i]>='0')&&(s[i]<='9')) ){
                temp.push_back(s[i]);
            }
            else if ((s[i]<='Z')&&(s[i]>='A')) {
                temp.push_back(s[i]+32);
            }
        }
        string temp_rev = temp ;
        std::reverse(begin(temp),end(temp));
        if (temp_rev == temp){
            return 1;
        }
        return 0;
        
        /*int i = 0;
        int j = s.size()- 1;
        
        while (i < j) {
            while (!(((s[i]<='Z')&&(s[i]>='A'))||((s[i]<='z')&&(s[i]>='a'))||((s[i]>='0')&&(s[i]<='9')))) ++i;
            while (!(((s[j]<='Z')&&(s[j]>='A'))||((s[j]<='z')&&(s[j]>='a'))||((s[j]>='0')&&(s[j]<='9')))) --j;
            if (i < j && toupper(s[i++]) != toupper(s[j--])) return false;
        }
        
        return true;*/
    }
};
