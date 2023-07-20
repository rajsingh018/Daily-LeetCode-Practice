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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* temp = NULL;
        while(head!=NULL){
            ListNode* forward = head->next;
            head->next = temp;
            temp=head;
            head=forward;
        }
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseLinkedList(l1);
        l2=reverseLinkedList(l2);
        
        ListNode* temp = new ListNode(-1);
        ListNode* tempHead=temp;
        int car = 0;
        int sum;
        while(l1!=NULL or l2!=NULL or car>0){
            sum=car;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            
            int ans = sum%10;
            car = sum/10;
            temp->next = new ListNode(ans);
            temp=temp->next;
        }
        return reverseLinkedList(tempHead->next);
    }
};