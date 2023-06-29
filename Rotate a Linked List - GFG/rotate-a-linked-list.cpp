//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        
        int c=1;
        Node* cnt=head;
        while(cnt->next!=NULL){
            cnt=cnt->next;
            c++;
        }
        if(k==c){
            return head;
        }
        k=k%c;
        
        Node* dummyTail=head;
        int count=1;
        while(count<k){
            dummyTail=dummyTail->next;
            count++;
        }
        Node* dummyHead = dummyTail;
        dummyHead=dummyHead->next;
        dummyTail->next=NULL;
        Node* dummyTail2 = dummyHead;
        while(dummyTail2->next!=NULL){
            dummyTail2=dummyTail2->next;
        }
        dummyTail2->next=head;
        head=dummyHead;
        
        return head;
        
    }
};
    
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends