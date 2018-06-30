//
//  solution617.cpp
//  Merge Two Binary Trees
//
//  Created by lazur on 2018/3/31.
//  Copyright © 2018年 lazur. All rights reserved.
//
#include <vector>
#include <string>
#include <iostream>
#include <queue>
#include <sstream>
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution617 {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return nullptr;
        
        TreeNode* node = new TreeNode((t1 ? t1->val : 0) + (t2 ? t2->val : 0));
        node->left = mergeTrees((t1 ? t1->left : nullptr), (t2 ? t2->left : nullptr));
        node->right = mergeTrees((t1 ? t1->right : nullptr), (t2 ? t2->right : nullptr));
        return node;
        //std::cout << "why here" << std::endl;
    }
    void test(){
        std::cout << "617. Merge Two Binary Trees" << std::endl;
        std::string T1 = "[1,3,2,5]";
        std::string T2 = "[2,1,3,null,4,null,7]";
        TreeNode* t1 = stringToTreeNode(T1);
        TreeNode* t2 = stringToTreeNode(T2);
        std::string t1_str = treeNodeToString(t1);
        std::string t2_str = treeNodeToString(t2);
        std::cout << t1_str << std::endl;
        std::cout << t2_str << std::endl;
        std::cout << "here" << std::endl;
        TreeNode* ret = mergeTrees(t1, t2);
        
        std::string out = treeNodeToString(ret);
        std::cout << out << std::endl;

    }
    
    void trimLeftTrailingSpaces(std::string &input) {
        input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
            return !isspace(ch);
        }));
    }
    
    void trimRightTrailingSpaces(std::string &input) {
        input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
            return !isspace(ch);
        }).base(), input.end());
    }
    
    TreeNode* stringToTreeNode(std::string input) {
        trimLeftTrailingSpaces(input);
        trimRightTrailingSpaces(input);
        input = input.substr(1, input.length() - 2);
        if (!input.size()) {
            return nullptr;
        }
        
        std::string item;
        std::stringstream ss;
        ss.str(input);
        
        getline(ss, item, ',');
        TreeNode* root = new TreeNode(stoi(item));
        std::queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        
        while (true) {
            TreeNode* node = nodeQueue.front();
            nodeQueue.pop();
            
            if (!getline(ss, item, ',')) {
                break;
            }
            
            trimLeftTrailingSpaces(item);
            if (item != "null") {
                int leftNumber = stoi(item);
                node->left = new TreeNode(leftNumber);
                nodeQueue.push(node->left);
            }
            
            if (!getline(ss, item, ',')) {
                break;
            }
            
            trimLeftTrailingSpaces(item);
            if (item != "null") {
                int rightNumber = stoi(item);
                node->right = new TreeNode(rightNumber);
                nodeQueue.push(node->right);
            }
        }
        return root;
    }
    
    std::string treeNodeToString(TreeNode* root) {
        if (root == nullptr) {
            return "[]";
        }
        
        std::string output = "";
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if (node == nullptr) {
                output += "null, ";
                continue;
            }
            
            output += std::to_string(node->val) + ", ";
            q.push(node->left);
            q.push(node->right);
        }
        return "[" + output.substr(0, output.length() - 2) + "]";
    }

};
