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
    
    vector<int> printLL(ListNode* &head){
        vector <int>num;
        while(head!=NULL){
            int p = (head->val);
            num.push_back(p);
            head=head->next;
        }
        return num;
        
    }
    
    vector<int> reverseLinkedList(ListNode* &head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!=NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr= forward;
        }
        vector<int>num;
        while(prev!=NULL){
            int p=(prev->val);
            num.push_back(p);
            prev=prev->next;
        }
        return num;
        
    }
    
    
    bool isPalindrome(ListNode* &head) {
        ListNode* temp = head;
        
        vector<int>v1 = printLL(temp);
        vector<int>v2 = reverseLinkedList(head);
        
        if(v1==v2){
            return true;
        }
        
        return false;
    }
};