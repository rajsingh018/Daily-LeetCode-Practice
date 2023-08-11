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
		   ListNode *f=head;
		   ListNode *s=head,*ptr=head;
		  while(f!=NULL && f->next!=NULL){
			  f=f->next->next;
			  s=s->next;
		  }
        while(ptr->next!=s){
            ptr=ptr->next;
        }
		ptr->next=ptr->next->next;
		return head;
	}
};