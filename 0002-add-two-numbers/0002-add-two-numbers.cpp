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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode *temp=l1;
//         string num1,num2,res;
//         while(temp != nullptr)
//         {
//             num1+=to_string(temp->val);
//             temp=temp->next;
//         }
//         temp=l2;
//         while(temp != nullptr)
//         {
//             num2+=to_string(temp->val);
//             temp=temp->next;
//         }
//         reverse(num1.begin(),num1.end());
//         reverse(num2.begin(),num2.end());
//         int n1,n2,r;
//         n1=stoi(num1);
//         n2=stoi(num2);
//         r=n1+n2;
//         res=to_string(r);
//         reverse(res.begin(),res.end());
        
//         ListNode* result = new ListNode(res[0] - '0'); // Create the first node

//         ListNode* current = result;

//         for (int i = 1; i < res.length(); i++) 
//         {
//             current->next = new ListNode(res[i] - '0'); // Create subsequent nodes
//             current = current->next;
//         }
//         return result;
        
    
        ListNode* result = new ListNode(0);
        ListNode* tempResult = result;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
            
            carry = sum / 10;
            tempResult->next = new ListNode(sum % 10);
            
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
            
            tempResult = tempResult->next;
        }
        
        if (carry > 0) {
            tempResult->next = new ListNode(carry);
        }
        
        return result->next;


        
    }
};