/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// using hashmap
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_set<ListNode*>set;
        while(head){
            set.insert(head);
            if(set.find(head->next)!=set.end()) return 1;
            head=head->next;
        }
        return 0;
    }
};

//using two pointer
class Solution{
    public:
        bool hasCycle(ListNode* head){
            ListNode* fast=head;
            ListNode* slow=head;
            while(fast && fast->next){
                // if there is a cycle these two pointers will meet somewhere
                slow=slow->next;
                fast=fast->next->next;
                if(fast==slow) return 1;
            }
            return 0;
        }
};