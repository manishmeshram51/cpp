#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Node* start = NULL;

void display(){
    Node* ptr;
    ptr = start;
    cout<<"the linkedlist is:"<< endl;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
    }
    while(ptr!=NULL){
        cout<< "->"<< ptr->data;
        ptr = ptr ->next;
    }
    cout<<endl;
}

void create(){
    Node *ptr;
    ptr = start;
    int num;

    do{
        cout<<"Enter data:"<<endl;
        cin>> num;

        if(start==NULL){
            start = new Node(num);
        }
        else{
            if(num!=-1){
                ptr = start;
                while(ptr->next != NULL){
                    ptr = ptr->next;
                }
                ptr->next =  new Node(num);
            }
        }
    }while(num!=-1);
    display();
}

void append(){
    Node * ptr;
    int num;

    cout<<"Enter data you want to append:"<<endl;
    cin>> num;

    if(start==NULL){
        start = new Node(num);
    }
    else{
        ptr = start;
        while(ptr->next!=NULL){
            ptr = ptr-> next;
        }
        ptr->next = new Node(num);
    }
    display();
}

void insert_front(){
    Node * ptr;
    int num;
    display();

    cout<<"Enter data you want to add in front:"<<endl;
    cin>> num;

    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        ptr = new Node(num);
        ptr -> next = start;
        start = ptr; 
    }
    display();
}

void insert_after(){
    int num, k;
    Node * ptr, * postptr;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        display();
        cout<<"Enter K :"<<endl;
        cin>>k;

        cout<<"Enter data you want to add after "<<k<<" :"<<endl;
        cin>> num;
        
        ptr = start;
        while(ptr->next !=NULL){
            if(ptr->data == k ){
                postptr = ptr->next;
                ptr-> next = new Node(num);
                (ptr->next)->next = postptr;
            }
            ptr = ptr -> next;
        }   
         display();
    }    
}

void insert_before(){
    Node * ptr, * preptr;
    int num,k;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        display();
        cout<<"Enter K :"<<endl;
        cin>>k;

        cout<<"Enter data you want to add before "<<k<<" :"<<endl;
        cin>> num;
        
        ptr = start;
        preptr = start;
        while(ptr->next != NULL){
            if(ptr->data==k){
                Node * newnode = new Node(num);
                preptr -> next = newnode;
                newnode -> next = ptr;
            }
            preptr = ptr;
            ptr = ptr -> next;
        }
        display();
    }
}

void deleteBigg(){
    // fully functional
    if(start == NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        start = start -> next;
        display();
    }
}

void deleteEnd(){
    // FULLY FUNCTIONAL
    Node * ptr;
    
    if(start == NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        ptr = start;
        if(start->next ==NULL){
            start = NULL; 
        }
        else{
            while(ptr-> next -> next!= NULL)
            {
                cout<<ptr-> data;
                ptr=ptr->next;
            }
            ptr -> next = NULL;
        }  
        display();     
    }
    
}

void delete_after(){
    int k;
    Node * ptr, * preptr;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        display();
        cout<<"Enter K :"<<endl;
        cin>>k;
        
        ptr = start;
        preptr = start;
        while(ptr->next !=NULL){
            if(preptr->data == k ){
                preptr -> next = ptr->next;
                break;
            }
            preptr = ptr;
            ptr = ptr -> next;
        }  
        if(ptr->next == NULL && preptr -> data == k){
            preptr ->next = NULL;
        }
        else if(ptr->next == NULL){
            cout<<"No element after last element"<<endl;
        }
        display();
    }    
}

void delete_before(){
   int k;
    Node * ptr, * preptr, * postptr;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        display();
        cout<<"Enter K :"<<endl;
        cin>>k;
        
        ptr = start;
        preptr = start;
        if(start->data == k){
            cout<<"No element before K"<<endl;
        }
        else if(start->next->data == k){
            start = start->next;
        }
        else{
            while(ptr->next !=NULL){
                if(postptr->data == k){
                    preptr->next = postptr;
                    break;
                }
                preptr = ptr;
                ptr = ptr->next;
                postptr = ptr->next;
            }
        }
        display();
    }
}

void delete_node(){
    // fully fuctional
    int k;
    Node * ptr, * preptr;
    if(start==NULL){
        cout<<"Linked list is empty"<<endl;
        create();
    }
    else{
        display();
        cout<<"Enter K :"<<endl;
        cin>>k;
        
        if(start->data==k){
            start = start->next;
        }
        else{
            ptr = start;
            preptr = start;

            while(ptr->next !=NULL){
                if(ptr->data == k){
                    preptr-> next = ptr -> next;
                    break;
                }
                preptr = ptr;
                ptr = ptr->next;
            }

            if(ptr->next == NULL){
                preptr->next = NULL;
            }
        }
        display();
    }
}

void getCount(){
    // fully functional
    int count=0;
    struct Node *ptr;
    ptr = start;
    
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    display();
    cout<<"count is :"<<count;
}

int main(){
    int choice;
    
    do{
        cout<<endl<<"---------------------------------------------------------------------------------";
        cout<<"\n Enter choice:\n 0) Stop \n 1) Create linkedlist \n 2) Display \n 3) Append \n 4) Insert from front\n 5) Inser After K \n 6) Insert before k\n 7) count the numer of nodes\n 8)Delete Node from begining \n 9) Delete Node from end \n 10) Delete Node after K \n 11) Delete Node before K\n 12)Delete Node\n";
        cout<<"---------------------------------------------------------------------------------"<<endl;
        cin>>choice;

        switch(choice){
        case 1:cout<<"Create LL:"<<endl;
                create();
                break;
        case 2:cout<<"Display LL:"<<endl;
                display();
                break;
        case 3:cout<<"Append :"<<endl;
                append();
                break;
        case 4:cout<<"Insert from front :"<<endl;
                insert_front();
                break;
        case 5:cout<<"insert after K:"<<endl;
                insert_after();
                break;
        case 6:cout<<"insert before K:"<<endl;
                insert_before();
                break;
        case 7:cout<<"Count:"<<endl;
                getCount();
                break;
        case 8:cout<<"Delete Node from begining"<<endl;
                deleteBigg();
                break;
        case 9:cout<<"Delete Node from end"<<endl;
                deleteEnd();
                break;
        case 10:cout<<"Delete Node after K"<<endl;
                delete_after();
                break;
        case 11:cout<<"Delete Node before K"<<endl;
                delete_before();
                break;
        case 12:cout<<"Delete Node K"<<endl;
                delete_node();
                break;
        default:cout<<"Enter valid option"<<endl;
        }
    }while(choice!=0);
    
}
