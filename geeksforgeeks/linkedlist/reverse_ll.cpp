// { Driver Code Starts
//Initial Template for C++

// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
struct node* update(struct node*start,int p);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start = NULL;
        struct node* cur = NULL;
        struct node* ptr = NULL;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new node(a);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        struct node*str=update(start,p);
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->next;
        }
        cout<<endl;  
    }
}

struct node*update(struct node* start,int p)
{
    //Add your code here
    int count =0;
    node * head;
    node* ptr = start;
    node* startBack = start;
    
    while(ptr->next!=NULL){
        if(count==p){
            cout<<" | ";
            start = ptr;
            head = ptr;
        }
        count ++;
        cout<<ptr->data<<" ";
        
        ptr = ptr-> next;
        head -> next = new node(ptr->data);
    }
    
    if(ptr->next==NULL){
        cout<<ptr->data<<" ";
        ptr->next = startBack;
    }
    cout<<endl;

    for(int i=0 ; i<p; i++){
        cout<<startBack->data<<" ";
        startBack = startBack->next;
    }
    startBack->next = NULL;
    
    cout<<endl;
    ptr = start;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr = ptr->next;
    }
    return start;
}