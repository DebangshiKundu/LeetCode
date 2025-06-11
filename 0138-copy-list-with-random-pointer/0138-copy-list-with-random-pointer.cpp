/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    //     unordered_map<Node*,Node*> nn;
    //     Node* h=head;
    //     while (h){
    //         nn[h]=new Node (h->val);
    //         h=h->next;
    //     }
    //     h=head;
    //     while (h){
    //         nn[h]->next=nn[h->next];
    //         nn[h]->random=nn[h->random];
    //         h=h->next;
    //     }
    //     return nn[head];
    // }

            Node* temp=head;
            while(temp){
                Node* copy= new Node (temp->val);
                copy->next=temp->next;
                temp->next=copy;
                temp=copy->next;
            }
            temp=head;
            while(temp){
                if (temp->random) temp->next->random=temp->random->next;
                temp=temp->next->next;
            }
            Node* dum=new Node(-1);
            Node* h=dum;
            temp=head;
            while(temp){
                h->next=temp->next;
                h=h->next;

                temp->next=h->next;
                temp=temp->next;
            }
            return dum->next;
    }


};