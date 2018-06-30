//
//  solution28.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/15.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution28 {
public:
    int strStr(string haystack, string needle) {
        int j=0; if (needle.length()==0) return 0;
        for(int i=0; i<haystack.length(); ){
            int rec = i;
            while(haystack[i]==needle[j]){
                if(j==needle.length()-1) return (i-j);
                i++;
                j++;
            }
            j=0;
            i=rec+1;
        }
        return -1;
    }
};
/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length(), n = needle.length();
        if (!n) return 0;
        vector<int> lps = kmpProcess(needle);
        for (int i = 0, j = 0; i < m; ) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            }
            if (j == n) return i - j;
            if (i < m && haystack[i] != needle[j]) {
                if (j) j = lps[j - 1];
                else i++;
            }
        }
        return -1;
    }
private:
    vector<int> kmpProcess(string& needle) {
        int n = needle.length();
        vector<int> lps(n, 0);
        for (int i = 1, len = 0; i < n; ) {
            if (needle[i] == needle[len])
                lps[i++] = ++len;
            else if (len) len = lps[len - 1];
            else lps[i++] = 0;
        }
        return lps;
    }
};*/
