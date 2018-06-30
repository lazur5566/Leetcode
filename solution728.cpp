//
//  solution728.cpp
//  Self Dividing Numbers
//
//  Created by lazur on 2018/4/2.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <vector>
#include <iostream>

class Solution728 {
public:
    /*std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> res;
        for (int i = left, n = 0; i <= right; i++) {
            for (n = i; n > 0; n /= 10)
                if (!(n % 10) || i % (n % 10)) break;
            if (!n) res.push_back(i);
        }
        return res;
    }*/
    bool isSelfDivNum(int n)
    {
        if(n>=1&&n<=9) {return true;}
        else{
            int zz = n;
            while (zz){
                if(zz%10==0){return false;} // check if 0 appears in n
                if(n%(zz%10)!=0) {return false;} // check if n is divided by zz%10
                zz = zz/10;
                //zz >>= 1;
            }
        }
        return true;
    }
    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector <int> selfNum;
        for(int i = left;i<=right;i++) {
            bool isDivNum = isSelfDivNum(i);
            if(isDivNum)
                selfNum.push_back(i);
        }
        return selfNum;
    }
    void test(){
        std::cout << "728. Self Dividing Numbers" << std::endl;
        int a;
        int b;
        std::cout << "input a lower bound int" << std::endl;
        std::cin >> a;
        std::cout << "input a upper bound int" << std::endl;
        std::cin >> b;
        std::vector<int> ans = selfDividingNumbers(a, b);
        for (auto i = ans.begin(); i!=ans.end(); i++){
            std::cout << *i << std::endl;
        }

    }
};
