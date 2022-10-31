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
    ListNode *detectCycle(ListNode *head) {
        typedef struct ListNode node;
        unordered_set<node*> us;
        node *th = head;
        while(th != NULL){
            if(us.insert(th).second==false){
                return th;
                
            }   
            th = th->next;
        }
        return NULL;
        }
};