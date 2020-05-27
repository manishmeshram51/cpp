// 4 array in cpp
#include <iostream>

using namespace std;

int main(){
    int arr[] = {5,4,3,2,1};

    for (int i = 0; i < 5 ; i++)
    {
        arr[i] += i * 2;
    }

    cout<<"updated arr is :"<<endl;
    for (int i = 0; i < 5 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}