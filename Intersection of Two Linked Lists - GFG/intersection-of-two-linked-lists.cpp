//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


// } Driver Code Ends
/* structure of list node:

/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>m;
        Node *p = head1;
        while(p!=NULL){
            m[p->data]++;
            p=p->next;
        }
        p=head2;
        while(p!=NULL){
            m[p->data]++;
            p=p->next;
        }
        vector<int>v;
        p=head1;
        while(p!=NULL){
            if(m[p->data]==2) v.push_back(p->data);
            p=p->next;
        }
        Node *newHead = new Node(-1);
        p=newHead;
        for(int i=0;i<v.size();i++){
            p->next = new Node(v[i]);
            p=p->next;
        }
        p->next=NULL;
        return newHead->next;
    }
    
    
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends