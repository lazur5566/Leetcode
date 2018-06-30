//
//  solution206.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/8.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution206 {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL) return head;
        ListNode *previous = 0,
        *current = head,
        *preceding = head->next;
        
        while (preceding != 0) {
            current->next = previous;      // 把current->next轉向
            previous = current;            // previous往後挪
            current = preceding;           // current往後挪
            preceding = preceding->next;   // preceding往後挪
        }                                  // preceding更新成NULL即跳出while loop
        
        current->next = previous;          // 此時current位於最後一個node, 將current->next轉向
        head = current;
        return head;
    }
};
