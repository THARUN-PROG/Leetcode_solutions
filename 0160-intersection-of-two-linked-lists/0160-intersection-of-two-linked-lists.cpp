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
    typedef struct ListNode node;
    int length(node* th){
        int count=0;
        while(th){
            count++;
            th = th->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int l1 = length(head1);
        int l2 = length(head2);
        
        while(l1<l2){
            head2 = head2->next;
            l1++;
        }
        
        while(l2<l1){
            head1 = head1 -> next;
            l2++;
        }
        
        while(head1!=head2){
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        return head1;
        
    }
};