// 3 function in cpp 
#include<iostream>
using namespace std;

float add(float n1 , float n2){
    return n1 + n2;
}

int main(){
    float n1,n2;

    cout<<"Enter first num:"<<endl;
    cin>>n1;
    
    cout<<"Enter second num:"<<endl;
    cin>>n2;

    
    cout<<"Enter add of 2 nums : "<<add(n1,n2)<<endl;
    
    return 0;
}