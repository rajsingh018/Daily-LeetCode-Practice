
class Solution {
public:
//     ListNode* tail = new ListNode();
//     ListNode* nextSubList = new ListNode();

//     ListNode* sortList(ListNode* head) {
//         if (!head || !head -> next)
//             return head;
//         int n = getCount(head);
//         ListNode* start = head;
//         ListNode dummyHead(0);
//         for (int size = 1; size < n; size = size * 2) {
//             tail = &dummyHead;
//             while (start) {
//                 if (!start->next) {
//                     tail->next = start;
//                     break;
//                 }
//                 ListNode* mid = split(start, size);
//                 merge(start, mid);
//                 start = nextSubList;
//             }
//             start = dummyHead.next;
//         }
//         return dummyHead.next;
//     }

//     ListNode* split(ListNode* start, int size) {
//         ListNode* midPrev = start;
//         ListNode* end = start->next;
//         for (int index = 1; index < size && (midPrev->next || end->next); index++) {
//             if (end->next) {
//                 end = (end->next->next) ? end->next->next : end->next;
//             }
//             if (midPrev->next) {
//                 midPrev = midPrev->next;
//             }
//         }
//         ListNode* mid = midPrev->next;
//         nextSubList = end->next;
//         midPrev->next = nullptr;
//         end->next = nullptr;
//         return mid;
//     }

//     void merge(ListNode* list1, ListNode* list2) {
//         ListNode dummyHead(0);
//         ListNode* newTail = &dummyHead;
//         while (list1 && list2) {
//             if (list1->val < list2->val) {
//                 newTail->next = list1;
//                 list1 = list1->next;
//                 newTail = newTail->next;
//             } else {
//                 newTail->next = list2;
//                 list2 = list2->next;
//                 newTail = newTail->next;
//             }
//         }
//         newTail->next = (list1) ? list1 : list2;
//         while (newTail->next) {
//             newTail = newTail->next;
//         }
//         tail->next = dummyHead.next;
//         tail = newTail;
//     }

//     int getCount(ListNode* head) {
//         int cnt = 0;
//         ListNode* ptr = head;
//         while (ptr) {
//             ptr = ptr->next;
//             cnt++;
//         }
//         return cnt;
//     }
    ListNode* sortList(ListNode* head) {
        ListNode* tempNode=head;
        vector<int> v;
        while(tempNode){
            v.push_back(tempNode->val);
            tempNode=tempNode->next;
        }
        sort(v.begin(), v.end());
        head=new ListNode(-1);
        tempNode=head;
        for(auto x:v){
            head->next=new ListNode(x);
            head=head->next;
        }
        return tempNode->next;
    }
};
