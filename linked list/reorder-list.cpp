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
    void reorderList(ListNode* head) {
        
        stack<ListNode*>s;
        
        ListNode* temp=head; 
        while(!temp){
            s.push(temp);
            temp=temp->next;
        }
        
        temp=head;
        int size=s.size()/2;
        
        while(size--){
            ListNode* temp1=temp;
            temp=temp->next;
            temp1->next=s.top();
            s.pop();
        }
 
    }
};