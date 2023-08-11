class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int k)
    {
        int count=0;
        ListNode* tempHead=head;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        k=count-k;

        if(k==0){
            head=tempHead;  
            ListNode* a = head;
            head=head->next;
            delete a;
            return head;
        }
        count=0;
        ListNode* temp =tempHead;
        while((k-1)!=count){
            temp=temp->next;
            count++;
        }
        ListNode* newTemp = temp->next;
        temp->next=temp->next->next;
        delete newTemp;
        return tempHead;
    }
};