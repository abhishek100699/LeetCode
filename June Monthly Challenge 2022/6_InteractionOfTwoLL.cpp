#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x){
       val = x ;
       ListNode * next = NULL ;
      }
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /*
        unordered_set<ListNode*> s;
        while(headA){
            s.insert(headA);
            headA = headA->next;
        }
        while(headB){
            if(s.find(headB)!=s.end()) return headB;
            headB = headB->next;
        }
        return NULL;
        */
        
        // Without Using Space
        int n = 0, m = 0;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        while(temp1){
            temp1 = temp1->next;
            n++;
        }
        while(temp2){
            temp2 = temp2->next;
            m++;
        }
        int diff = abs(n-m);
        temp1 = headA;
        temp2 = headB;
        if(n>m){
            while(diff-- > 0){
                temp1 = temp1->next;
            }
        }
        else{
            while(diff-- > 0){
                temp2 = temp2->next;
            }
        }
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1 == NULL || temp2 == NULL) return NULL;
        }
        return temp1;
    }
};