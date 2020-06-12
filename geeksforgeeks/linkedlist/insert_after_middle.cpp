// { Driver Code Starts
// https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


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

// function should insert node at the middle
// of the linked list
// Node* insertInMiddle(Node* head, int x)
// {
// 	// Cpde here
// 	Node * ptr , * newnode;
//     Node * fast = head;
//     Node * slow = head;
//     
//     while(fast->next != NULL && fast->next->next != NULL){
//         slow = slow->next;
//         ptr = slow->next;
//         fast = fast->next->next;
//     }
//     // middle data
//     cout<<"mid is"<<slow->data<<endl;
//     newnode = new Node(x);
//     slow->next = newnode;
//     newnode ->next = ptr;
    
//     return head;
// }
Node* insertInMiddle(Node* head, int x)
{
// Code here
if(head==NULL) return new Node(x);
Node *slow=head, *fast=head->next;
while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}
    Node *newnode=new Node(x);
    Node *ptr=slow->next;
    slow->next=newnode;
    newnode->next=ptr;
    return head;
}