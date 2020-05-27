// 5 pointers with call by value and call by reference in cpp 
#include<iostream>
using namespace std;

// call by value 
void swap_cbv(int n1 , int n2){
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
    cout<<"swap of 2 numbers using call by value inside fun: "<<endl;
    cout<<"n1:"<<n1<<endl<<"n2:"<<n2<<endl;
}

void swap_cbr(int *n1 , int *n2){
    int t;
    t = *n1;
    *n1 = *n2;
    *n2 = t;
    cout<<"swap of 2 numbers using call by reference inside fun: "<<endl;
    cout<<"n1:"<<*n1<<endl<<"n2:"<<*n2<<endl;
}


int main(){
    int n1,n2;

    cout<<"Enter first num:"<<endl;
    cin>>n1;
    
    cout<<"Enter second num:"<<endl;
    cin>>n2;

    
    
    swap_cbv(n1,n2);
    cout<<"swap of 2 numbers using call by value outside fun: "<<endl;
    cout<<"n1:"<<n1<<endl<<"n2:"<<n2<<endl;

    swap_cbr(& n1,& n2);
    cout<<"swap of 2 numbers using call by reference outside fun: "<<endl;
    cout<<"n1:"<<n1<<endl<<"n2:"<<n2<<endl;
    
    return 0;
}