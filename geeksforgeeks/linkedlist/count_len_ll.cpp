// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

/*
Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Input:
The first line of input contains the number of test cases T. For each test case, the first line of input contains the number of nodes N, to be inserted into the linked list and the next line contains data of N nodes.

Output:
There will be a single line of output for each test case, which contains the length of the linked list.

User Task:
Your task is to complete the given function getCount(), which takes a head reference as an argument and should return the length of the linked list.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= value <= 103

Example:
Input:
2
5
1 2 3 4 5
7
2 4 6 7 5 1 0
Output:
5
7
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


int getCount(struct Node* head){
    int count=0;
    struct Node *temp;
    temp=head;
    
    while(temp!=0)
    {
    count++;
    temp=temp->next;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail =  head;

        for(int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail ->next;
        }
        cout<<"count is :"<<getCount(head)<<endl;
    }
}
