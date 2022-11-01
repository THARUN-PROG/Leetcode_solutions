/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{
    typedef struct ListNode Node;
    Node * th = NULL;
    Node* reverse(Node* prev, Node* curr)
    {
        if(curr) {
            reverse(curr, curr -> next);
            curr -> next = prev;   
        }
        
        if(curr==NULL) th = prev;
        return th;
    }
    return reverse(NULL, head);
    
}

