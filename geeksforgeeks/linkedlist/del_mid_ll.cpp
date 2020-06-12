// { Driver Code Starts


// #include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 


// } Driver Code Ends


/* Link list Node
/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Deletes middle of linked list and returns head of the modified list
// Node* deleteMid(Node* head) {
//     // Your Code Here
//     Node *ptr = head;
//     Node * fast_ptr = head;
//     Node * slow_ptr = head;
//     // here we wanted 1 2 3 4 5 6 mai se 4 as a mid
//     while(fast_ptr != NULL && fast_ptr->next != NULL){
//         ptr = slow_ptr;
//         slow_ptr = slow_ptr->next;
//         fast_ptr = fast_ptr->next->next;
//     }
//     // middle data
//     // cout<<slow_ptr->data;

//     ptr->next = slow_ptr->next;
    
//     return head;
// }
