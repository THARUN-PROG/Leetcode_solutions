/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    typedef struct ListNode Node;
    
        Node * curr = head;
        Node * prev = NULL, * nextnode = NULL;
        
        while(curr != NULL){
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        
        return prev;

}