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
    int countNode(ListNode*head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int l = countNode(head);
        
        if(head==NULL or head->next==NULL or k==0){
            return head;
        }
        k=k%l;
        if(k==0){
            return head;
        }
        for(int i=0;i<k;i++){
            ListNode* tail = head;
            ListNode* tailPrev = NULL;
            
            while(tail->next!=NULL){
                tailPrev=tail;
                tail=tail->next;
            }
            tail->next=head;
            tailPrev->next=NULL;
            head=tail;
        }
        return head;
    }
};