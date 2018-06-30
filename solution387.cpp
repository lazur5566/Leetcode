//
//  solution387.cpp
//  First Unique Character in a String
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>
class Solution387 {
public:
    int firstUniqChar(std::string s) {
        //int map=0;
        std::vector<int> s_m(26, 0);
        std::vector<int> test(26, -1);
        //stack<int> p_q;
        int pos=0;
        for (char c:s){
            if (!s_m[c-'a']) test[c-'a']=pos;// record every c's first position
            s_m[c-'a']=s_m[c-'a']+1; // record every c's appearance number
            pos++;
            //std::cout << pos << std::endl;
        }
        int min_pos = -1;
        bool if_exist = 0;
        for (int i=0; i<26; i++){
            //std::cout << "i=" << i << ", s_m[i]=" << s_m[i] << ", test[i]=" << test[i] << std::endl;
            if (s_m[i]==1 && test[i]!=-1) {
                if (!if_exist) min_pos=test[i];
                else if (test[i] < min_pos) min_pos=test[i];
                if_exist=1;
            }
        }
        return min_pos;
    }
    /*
    int firstUniqChar_ref(string s) {
        unordered_map<char, pair<int, int>> m;
        int idx = s.size();
        for (int i = 0; i < s.size(); i++) {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for (auto &p : m) {
            if (p.second.first == 1) idx = min(idx, p.second.second);
        }
        return idx == s.size() ? -1 : idx;
    }
     */
};
