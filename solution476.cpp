//
//  solution476.cpp
//  Number Complement
//
//  Created by lazur on 2018/4/4.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <iostream>
#include <stdio.h>
class Solution476 {
public:
    int findComplement(int num) {
        int temp = num;
        int comp = 0;
        int cnt = 0;
        while(temp){
            comp+=(!(temp%2))<<cnt;
            //std::cout << comp << std::endl;
            //std::cout << cnt << std::endl;
            cnt++;
            temp>>=1;
        }
        return comp;
    }
    int findComplement_ref(int num) {
        unsigned mask = ~0;
        while(mask & num)
            mask <<= 1;
        return ~mask & ~num;
    }
    void test(){
        std::cout << "476. Number Complement" << std::endl;
        std::cout << "input arbitrary number" << std::endl;
        int i;
        std::cin >> i;
        int j = findComplement(i);
        std::cout << "ans is " << j << std::endl;
    }
};
