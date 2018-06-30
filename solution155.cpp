//
//  solution155.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/15.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <stack>
class MinStack {
private:
    std::stack<int> s1;
    std::stack<int> s2;
public:
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= getMin())  s2.push(x);
    }
    void pop() {
        if (s1.top() == getMin())  s2.pop();
        s1.pop();
    }
    int top() {
        return s1.top();
    }
    int getMin() {
        return s2.top();
    }
};
