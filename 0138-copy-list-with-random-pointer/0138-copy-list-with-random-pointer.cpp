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
        unordered_map<Node*,Node*> nn;
        Node* h=head;
        while (h){
            nn[h]=new Node (h->val);
            h=h->next;
        }
        h=head;
        while (h){
            nn[h]->next=nn[h->next];
            nn[h]->random=nn[h->random];
            h=h->next;
        }
        return nn[head];
    }
};