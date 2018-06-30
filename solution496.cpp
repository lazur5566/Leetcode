//
//  solution496.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/5.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution496 {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};
