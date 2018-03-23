#include <iostream>

template<typename T>
class TreeNode {
public:
    T val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(T _val) :val(_val), left(nullptr), right(nullptr) {};


};

template<typename T>
class ListNode {

    T val;
    ListNode *next;
    ListNode(T _val) :val(_val), next(nullptr) {};


};

template<typename T>
class DListNode {

    T val;
    ListNode *next;
    ListNode *prev;
    ListNode(T _val) :val(_val), next(nullptr), prev(nullptr) {};


};

