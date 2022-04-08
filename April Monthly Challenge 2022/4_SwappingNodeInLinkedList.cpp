

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
      //  ListNode *slow, fast;
        ListNode *slow = head;
        ListNode *fast = head;
        while(--k){
            slow = slow->next;
        }
        ListNode *curr = slow;
        slow = slow->next;
        while(slow!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        swap(fast->val,curr->val);
        return head;
    }
};