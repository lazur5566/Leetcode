//
//  solution682.cpp
//  Baseball Game
//
//  Created by lazur on 2018/4/5.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Solution682 {
public:
    int calPoints(vector<string>& ops) {
        vector<bool> all_round_vld(1000,0);
        vector<int> all_round_move(1000,0);
        
        int r=0;
        int sum = 0;
        for (auto s : ops){
            if (s=="+"){
                int temp = find_last_vld_round(r, all_round_vld);
                int temp2 = find_last_vld_round(temp, all_round_vld);
                all_round_move[r] = all_round_move[temp]+all_round_move[temp2];
                all_round_vld[r] = 1;
            }
            else if (s=="D"){
                int temp = find_last_vld_round(r, all_round_vld);
                all_round_move[r] = all_round_move[temp]+all_round_move[temp];
                all_round_vld[r] = 1;
            }
            else if (s=="C") {
                int temp = find_last_vld_round(r, all_round_vld);
                all_round_move[temp] = 0;
                all_round_vld[temp] = 0;
                all_round_vld[r] = 0;
            }
            else {
                all_round_move[r] = stoi(s);
                all_round_vld[r] = 1;
            }
            r++;
        }
        for (int i =0; i<=r; i++){
            if (all_round_vld[i]) sum+=all_round_move[i];
        }
        return sum;
    }
    int find_last_vld_round(int n, vector<bool>& all_round_vld){
        for (int i=n-1; i>=0; i--){
            if (all_round_vld[i]==1) return i;
        }
        return 0;
    }
    int calPoints_ref(vector<string>& ops) {
        vector<int> scores;
        for (auto op : ops) {
            if (op == c) {
                //const int score = scores.back();
                scores.pop_back();
            } else if (op == d) {
                const int score = 2 * scores.back();
                scores.push_back(score);
            } else if (op == p) {
                const int size = scores.size();
                const int score = scores[size-1] + scores[size-2];
                scores.push_back(score);
            } else {
                const int score = stoi(op);
                scores.push_back(score);
            }
        }
        int sum = 0;
        for (auto score : scores) {
            sum += score;
        }
        return sum;
    }

private:
    const string c = "C";
    const string d = "D";
    const string p = "+";
};
