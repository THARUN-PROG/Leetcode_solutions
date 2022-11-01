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
    ListNode* oddEvenList(ListNode* head) {
        typedef struct ListNode node;
        node * firsteven, * lasteven, *firstodd, *lastodd, *th;
        firsteven = lasteven = firstodd = lastodd = NULL;
        th = head;
        int flag = 0;
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        while(th != NULL){
            if(flag == 1){
                if(firsteven == NULL)
                    firsteven = lasteven = th;
                else
                {
                    lasteven -> next = th;
                    lasteven = th;
                }
            }
            
            else
            {
                if(firstodd == NULL)
                    firstodd = lastodd = th;
                else
                {
                    lastodd -> next = th;
                    lastodd = th;
                }
            }
            flag=!flag;
            th = th-> next;
    }
       head = firstodd;
       lastodd -> next = firsteven;
       lasteven -> next = NULL;
        return head;
    }
};