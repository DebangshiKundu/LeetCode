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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int num=1;
        while(temp->next!=nullptr){
            num++;
            temp=temp->next;
        }
        temp=head;
        if(num==1){
            delete head;
            return nullptr;
        }
        if(num==n){
            head=temp->next;
            return head;
        }
        for(int i=0;i<num-n-1;i++)
            temp=temp->next;
        ListNode *rem=temp->next;
        temp->next=temp->next->next;
        delete rem;
        return head;
    }
};