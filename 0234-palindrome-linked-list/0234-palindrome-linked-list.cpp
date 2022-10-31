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
    bool isPalindrome(ListNode* head) {
    typedef struct ListNode node;
    stack<int>s;
    node * th = head;
    while(th!=NULL){
        s.push(th->val);
        th=th->next;
    }
    
    th=head;
    while(th!=NULL){
        while(th->val!=s.top())
            return 0;
        th=th->next;
        s.pop();
    }
    
    return 1;
    }
};