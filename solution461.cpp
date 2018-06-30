//
//  solution461.cpp
//  Hamming Distance
//
//  Created by lazur on 2018/3/27.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <iostream>
#include <bitset>
#include <string>
class Solution461 {
    public:
    int hammingDistance(int x, int y) {
        
        //std::string s = std::bitset< 64 >( 12345 ).to_string();
        int hdistance = 0;
        std::string x_str = std::bitset<32>(x).to_string();
        std::string y_str = std::bitset<32>(y).to_string();
        int idx=0;
        const char *y_chars = y_str.c_str();
        for (char c : x_str){
            if (c!=y_chars[idx]) hdistance++;
            idx++;
        }
        //int z = x & y;
        //std::cout << "z = "<<z <<std::endl;
        //hdistance = x_str.compare(y_str);
        return hdistance;
    }
    int hammingDistance_ref(int x, int y) {
        int z = x^y;
        int count = 0;
        while(z){
            count += z&1;
            z >>= 1;
        }
        return count;
    }
    void test(){
        std::cout << "461. Hamming Distance" << std::endl;
        int x,y;
        std::cout << "cin int x" << std::endl;
        std::cin >> x;
        std::cout << "cin int y" << std::endl;
        std::cin >> y;
        std::cout << "the hamming distance between x and y is "<< hammingDistance(x, y)<< std::endl;
    }
};
