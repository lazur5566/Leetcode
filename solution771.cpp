//
//  solution.cpp
//  771. Jewels and Stones
//
//  Created by lazur on 2018/3/25.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <set>
#include <string>
#include <iostream>

class Solution771 {
public:
    int numJewelsInStones(std::string J, std::string S) { //golden solution on leetcode
        int res = 0;
        std::set<char> setJ(J.begin(), J.end());
        for (char s : S) if (setJ.count(s)) res++;
        return res;
    }
    int numJewelsInStones_2(std::string J, std::string S) {
        int res = 0;
        std::set<char> setJ(J.begin(), J.end());
        for (char s: S){
            for (char j: J){
                if (s==j) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
    int numJewelsInStones_ref(std::string J, std::string S) {
        int x=J.size(),y=S.size(),temp=0;
        
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(J[i-1]==S[j-1]){
                    temp++;
                }
            }
        }
        return temp;
    }
    void test (){
        // insert code here...
        std::cout << "771. Jewels and Stones\n";
        //std::string J = "ABCDE";
        //std::string S = "AACCW";
        std::string J;
        std::string S;
        std::cout << "cin J" << std::endl;
        std::cin >> J;
        std::cout << "cin S" << std::endl;
        std::cin >> S;
        Solution771* dd=new Solution771();
        int ans = dd->numJewelsInStones(J, S);
        Solution771* dd_2=new Solution771();
        int ans_2 = dd_2->numJewelsInStones_2(J, S);
        std::cout << "ans: " << ans << std::endl;
        std::cout << "ans_2: " << ans_2 << std::endl;
    }
};

