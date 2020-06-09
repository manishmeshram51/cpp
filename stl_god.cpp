#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#include <math.h>
using namespace std;

bool comp(int x, int y){
    return x > y; 
}

void vectorDemo(){
    cout <<" "<<"vector demo"<<endl;
    // defining a vector
    vector <int> A = {2,3,45,7,1,0};

    // accesing the vector elements
    cout << A[0];   // 2

    cout<<"\n";
    sort(A.begin(), A.end());   // O(nlogn)

    cout<<"sorted vectir is :";     //{0,1,2,3,4,5}
    for(int i = 0; i < 6; i++){
        cout<< i;
    }

    bool present = binary_search(A.begin(), A.end(),45);    //true
    cout<<"\n Is 45 present :"<<present;

    A.push_back(100);
    present = binary_search(A.begin(), A.end(),100);    //true
    cout<<"\n Is 100 present :"<<present;
    
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    // {0,1,2,3,4,5,100,100,100,100,123}

    vector<int>::iterator it1 =  lower_bound(A.begin(), A.end(),100);    // first element >= 100 O(log n)
    auto it2 =  lower_bound(A.begin(), A.end(),100);                     // same can be done using auto 

    vector<int>::iterator it3 =  upper_bound(A.begin(), A.end(),100);    // first element stricly > 100 O(log n)
    auto it4 =  upper_bound(A.begin(), A.end(),100);                    // same can be done with ato

    cout << "\n" << *it1 << " " << *it3;    // 100 and 123
    cout << "\n" << *it2 << " " << *it4; 

    // {0,1,2,3,4,5,100,100,100,100,123}
    // count of how many 100 are present 
    cout<< "\nOccurance of the 100 in array :"<<abs(it1 - it2); 
    
    // sorting vector in desc
    sort(A.begin(), A.end() , comp );    // comp is comparator function   

    // printing vector
    vector <int>:: iterator it5;

    cout << "\ndesc  order :\n";    // printing vector 
    for(it3 = A.begin() ; it3!=A.end(); it3++){
        cout << " " << *it3;
    }


    cout << "\nprinting vector with diffrent simple approach :\n";      // printing vectoir with simple approch but here we cannot update the elemetn
    for( int x:A ){
        cout<<" "<< x;
    }

    cout << "\nprinting vector  :\n";      // printing vectoir and update the elements at the same time
    for( int &x:A ){    // reference
        x++;
        cout<<" "<< x;
    }

}

void setDemo(){
    cout <<" "<<"set demo"<<endl;
    set <int> S;

    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    cout << "\nprinting set  :\n";
    for(int x : S){
        cout<<" "<< x;
    }

    // -10,-1,1,2

    // auto it = S.find(-1);
    auto it = S.find(12);

    if(it==S.end()){
        cout << "\n " << "not presnt "<< endl;
    }
    else{
        cout << "\n " << "presnt "<< *it <<endl;
    }

    // first occurance
    auto it2 = S.lower_bound(-1);    // >=
    cout << "\n " << "first "<< *it2 <<endl;

    // total occurance
    auto it3 = S.upper_bound(-1);    // >
    cout << "\n " << "last "<< *it3 <<endl;

    S.erase(2);
    cout << "\nprinting set  :\n";
    for(int x : S){
        cout<<" "<< x;
    }
}
int main(){
    vectorDemo();
    setDemo();




}