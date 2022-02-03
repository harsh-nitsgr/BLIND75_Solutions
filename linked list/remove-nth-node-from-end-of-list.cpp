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
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        int size=0;
        ListNode* temp= head;
        
        while(temp != NULL){
            size++;
            temp=temp->next;
        }
        
        temp=head;  
        ListNode* toDelete;
        
        if(n==size){
            toDelete=head;
            head=head->next;
            delete toDelete;
            return head;
        }
        //temp will point to second last node and we will delete temp->next
        for(int i=1;i<size-n;i++){
            temp=temp->next;
        }
        toDelete=temp->next;
        temp->next=temp->next->next;
        delete toDelete;
        
        return head;
    }
};