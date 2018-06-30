//
//  solution141.cpp
//  LEETCODE
//
//  Created by lazur on 2018/4/14.
//  Copyright © 2018年 lazur. All rights reserved.
//

#include <stdio.h>
#include <unordered_set>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution141 {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL) return false;
        unordered_set<ListNode*> node_set;
        ListNode *traverse_node=head;
        while(traverse_node!=NULL){
            if (!node_set.count(traverse_node))
                node_set.emplace(traverse_node);
            else return true;
            traverse_node=traverse_node->next;
        }
        return false;
    }
    bool hasCycle_2(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast&&slow&&fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if (fast==slow) return true;
        }
        return false;
    }
};
