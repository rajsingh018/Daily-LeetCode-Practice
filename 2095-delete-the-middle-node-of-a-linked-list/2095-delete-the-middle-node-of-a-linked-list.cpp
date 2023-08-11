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
	ListNode* deleteMiddle(ListNode* head) {
		   if(head->next==NULL) return NULL;
		   ListNode *fast=head;
		   ListNode *slow=head,*ptr=head;
		  while(fast!=NULL && fast->next!=NULL){
			  fast=fast->next->next;
			  slow=slow->next;
		  }
        while(ptr->next!=slow){
            ptr=ptr->next;
        }
		// ptr->next=ptr->next->next;
        ptr->next=slow->next;
        delete slow;
		return head;
	}
};