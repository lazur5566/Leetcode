//
//  solution160.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/15.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution160 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1 = headA;
        ListNode *l2 = headB;
        while(l1!=l2){
            
            if (l1==NULL) l1=headB;
            else l1=l1->next;
            
            if (l2==NULL) l2=headA;
            else l2=l2->next;
        }
        return l1;
    }
};
