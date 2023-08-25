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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rem=0,val=0;
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        while(l1!=NULL || l2!=NULL){
            if(l1 && l2){
                val = (l1->val + l2->val) + rem;
                rem = val/10;
                ListNode* temp = new ListNode();
                temp->val = val%10;
                head->next = temp;
                head = head->next;
                l1 = l1->next;
                l2 = l2->next;
            } 
            else if(l1){
                val = l1->val + rem;
                rem = val/10;
                ListNode* temp = new ListNode();
                temp->val = val%10;
                head->next = temp;
                head = head->next;
                l1 = l1->next;
                
            }
            else if(l2){
                val = l2->val + rem;
                rem = val/10;
                ListNode* temp = new ListNode();
                temp->val = val%10;
                head->next = temp;
                head = head->next;
                l2 = l2->next;
            }
            
        }
        if(rem>0){
            ListNode* temp = new ListNode();
            temp->val = rem;
            head->next = temp;
            temp->next = NULL;
        }
    
        return tail->next;
    }
};