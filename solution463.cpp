//
//  solution463.cpp
//  Island Perimeter
//
//  Created by lazur on 2018/4/5.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <vector>

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        int size_y = grid.size(); // y dimension
        int size_x = grid[0].size(); // x dimension
        //std::vector<std::vector<int>> adj_cnt; // 1 means 0 but there is land
        int sum =0;
        for (int r=0; r<size_y; r++){
            for (int c=0; c<size_x; c++){
                if (grid[r][c])
                    //grid[r][c]=grid[r][c]+(((r+1)<size_y)&&(grid[r+1][c]))+((r>0)&&(grid[r-1][c]))+(((c+1)<size_x)&&(grid[r][c+1]))+((c>0)&&grid[r][c-1]);
                    sum = sum + 5 -( grid[r][c]=grid[r][c]+(((r+1)<size_y)&&(grid[r+1][c]))+((r>0)&&(grid[r-1][c]))+(((c+1)<size_x)&&(grid[r][c+1]))+((c>0)&&grid[r][c-1]) );
            }
        }
        return sum;
    }
    int islandPerimeter_ref(std::vector<std::vector<int>>& grid) {
        int count=0, repeat=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count ++;
                    if(i!=0 && grid[i-1][j] == 1) repeat++;
                    if(j!=0 && grid[i][j-1] == 1) repeat++;
                }
            }
        }
        return 4*count-repeat*2;
    }
};
