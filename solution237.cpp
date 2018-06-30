//
//  solution237.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *(node->next);
        //can't use node = node->next
    }
};
