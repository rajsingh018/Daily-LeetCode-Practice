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
    ListNode* reverseList(ListNode* head) {
//         ListNode* pre = NULL;
//         ListNode* curr = head;
        
//         while(curr!=NULL){
//             ListNode* forward = curr->next;
//             curr->next = pre;
//             pre=curr;
//             curr=forward;
//         }
        
//         return pre;
        ListNode* temp = NULL;
        ListNode* tempHead= head;
        if(head==NULL or head->next ==NULL) return head;
        while(tempHead!=NULL){
            ListNode* forward = tempHead->next;
            tempHead->next = temp;
            temp=tempHead;
            tempHead=forward;
        }
        return temp;
        
    }
};















// ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr != NULL){
//             ListNode* forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
            
//         }
//         return prev;