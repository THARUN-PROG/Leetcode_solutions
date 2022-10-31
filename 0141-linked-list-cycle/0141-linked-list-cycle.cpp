/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        typedef struct ListNode node;
        unordered_set <node*> us;
        node * th = head;
        while(th != NULL){
            if(us.insert(th).second==false)
                return true;
            th = th-> next;
        }
         return false;
    
    }
    
};