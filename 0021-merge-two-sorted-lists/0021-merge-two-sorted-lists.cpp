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
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
        typedef struct ListNode node;
        node * head = NULL;
        node * tail = NULL;
        if(A==NULL) return B;
        if(B==NULL) return A;
        if(A->val <= B-> val){
            head=tail=A;
            A=A->next;
        }
        else{
            head=tail=B;
            B=B->next;
        }
        
        while(A!=NULL && B!=NULL){
            if(A->val <= B->val){
                tail-> next=A;
                tail = A;
                A = A->next;
            }
            else{
                tail->next = B;
                tail = B;
                B = B->next;
            }
            
            }
        
           if(A== NULL){
               tail->next = B;
           }
           else{
               tail->next = A;
           }
        
           return head;
               
           }

    
};