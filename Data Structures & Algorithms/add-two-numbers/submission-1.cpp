/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* add(ListNode*l1,ListNode*l2,int carry){
        if(!l1&&!l2&&carry==0){
            return NULL;
        }
        int v1=0;
        int v2=0;
        if(l1){
            v1=l1->val;

        }
        if(l2){
            v2=l2->val;
        }
        int sum=v1+v2+carry;
        int newCarry=sum/10;
        int nodevalue=sum%10;
        ListNode* nextnode=add(l1?l1->next:NULL,l2?l2->next:NULL,newCarry);
        return new ListNode(nodevalue,nextnode);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1,l2,0);
    }
};
