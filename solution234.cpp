//
//  solution234.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/22.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };
class Solution234 {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* pre = NULL;
        while (fast && fast->next){
            ListNode* tmp = slow;
            slow = slow->next;
            fast = fast->next->next;
            tmp->next = pre;
            pre = tmp;
        }
        if(fast != NULL) {
            slow = slow->next;
        }
        return isSameList(pre, slow);
    }
    bool isSameList(ListNode *node0, ListNode *node1) {
        while(node0 && node1) {
            if (node0->val != node1->val) return false;
            node0 = node0->next;
            node1 = node1->next;
        }
        //if (node0 || node1) return false;
        return true;
    }
};
