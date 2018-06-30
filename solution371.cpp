//
//  solution371.cpp
//  Sum of Two Integers
//
//  Created by lazur on 2018/4/7.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <string>
#include <iostream>
class Solution371 {
public:
    int getSum(int a, int b) {
        int sum=0;
        int next_a = 0;
        while(a|b|next_a){
            if ((a%2)^(b%2)^next_a) {
                std::cout << "cond1" << std::endl;
                std::cout << a << std::endl << a%2 << std::endl << b << std::endl << b%2 << std::endl << next_a << std::endl;
                sum=((sum<<1)^1);
                next_a=0;
            }
            else {
                std::cout << "cond2" << std::endl;
                std::cout << a << std::endl << a%2 << std::endl << b << std::endl << b%2 << std::endl << next_a << std::endl;
                sum=(sum<<1);
            }
            if (((a%2)|(b%2))&&((a%2)|(next_a))&&((b%2)|(next_a))) {
                std::cout << "cond3" << std::endl;
                std::cout << a << std::endl << a%2 << std::endl << b << std::endl << b%2 << std::endl << next_a << std::endl;
                next_a = 1;
            }
            a>>=1;
            b>>=1;
        }
        return sum;
    }
    void test(){
        std::cout << "input 2 int" << std::endl;
        int a;
        int b;
        std::cin >> a;
        std::cin >> b;
        std::cout << getSum(a, b) << std::endl;
    }
};
