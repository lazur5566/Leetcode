//
//  solution118.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/12.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution118 {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows==0) return vector<vector<int>>{{}};
        vector<vector<int>> ret;
        vector<int> first_row = {1};
        ret.push_back(first_row);
        for (int i=1; i<numRows; i++){
            std::vector<int> row(i+1,0);
            ret.push_back(row);
            ret[i][0]=1;
            ret[i][i]=1;
            for (int j=1; j<i; j++){
                ret[i][j]=ret[i-1][j]+ret[i-1][j-1];
            }
        }
        return ret;
    }
    /*vector<vector<int> > generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
            
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }*/
    void test(){
        generate(10);
    }
};
