//
//  solution204.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/29.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
#include <math.h>
#include <algorithm>
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        
        
        vector<int> primelist;
        primelist.push_back(2);
        for(int i=3; i<n; i++){
            double test_upper_bound = sqrt(i);
            bool is_prime = 1;
            for(int t:primelist){
                if (t>test_upper_bound) break;
                else if (i%t==0) {is_prime = 0; break;}
            }
            if (is_prime) primelist.push_back(i);
        }
        
        return primelist.size();
        
    }/*    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> prime(n, true);
        prime[0] = false;
        prime[1] = false;
        //prime[2] = true;
        int upper_bound = sqrt(n-1);
        for (int i=2; i<=upper_bound; i++){
            if (prime[i]) {
                for(int j=2; i*j<n; j++){
                    prime[i*j] = 0;
                }
            }
        }
        int cnt =0;
        for (bool x : prime) cnt+=x;
        return cnt;
    }*/
    /*int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> prime(n, true);
        prime[0] = false;
        prime[1] = false;
        //prime[2] = true;
        int cnt=0;
        //int upper_bound = sqrt(n-1);
        for (int i=2; i<n; i++){
            if (prime[i]) {
                cnt++;
                for(int j=2; i*j<n; j++){
                    prime[i*j] = 0;
                }
            }
        }
        //int cnt =0;
        //for (bool x : prime) cnt+=x;
        return cnt;
    }*/
};
