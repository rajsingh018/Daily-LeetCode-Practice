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
    ListNode* swapNodes(ListNode* head, int k) {
        // count the number of element
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(count%2!=0 and (count/2) + 1==k) return head;
        temp = head;
        int p,q;
        int i=1;
        int n=count-k+1; 
        while(temp!=NULL){
            if(i==k){
                p=temp->val;
            }
            else if(i==n){
                q=temp->val;
            }
            i++;
            temp=temp->next;
        }
        i=1;
        temp=head;
        while(temp!=NULL){
            if(i==k){
                temp->val=q;
            }
            else if(i==n){
                temp->val=p;
            }
            i++;
            temp=temp->next;
        }
        
        return head;
    }
};