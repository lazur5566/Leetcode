//
//  solution202.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/11.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <map>
#include <string>
#include <unordered_set>
using namespace std;


class Solution202 {
public:
    
    map<int,int> m;
    
    int getsumsquare(int n) {
        
        int count=0;
        string number = to_string(n);
        
        for(char a:number)
            count+=m[a-'0'];
        
        return count;
    }
    
    bool isHappy(int n) {
        
        for(int i=0;i<10;i++)
            m[i]=i*i;
        
        unordered_set<int> old;
        
        int ss = getsumsquare(n);
        old.emplace(ss);
        while(ss!=1){
            ss = getsumsquare(ss);
            if (old.count(ss)) return false;
            else old.emplace(ss);
        }
        
        return true;
    }
};
