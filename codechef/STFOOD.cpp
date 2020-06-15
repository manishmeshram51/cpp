//

// v= price of one piece of food
// s =  store
// p = people 

// p/s should be divisible
// p/S * v 

// 2
// 3
// s p v
// 4 6 8 // 6/4 
// 2 6 6 //
// 1 4 3
// 1
// 7 7 4


#include<iostream>

using namespace std;

int main(

    int t;
    cin>>t;

    while(t--){
        int n, s, p ,v;
        int profit = 0;
        cin>>n>>s>>p>>v;

        

        while(n--){
            if(p % s == 0){
                profit += (p/s) * v; 
            }
            else{
                profit = profit;
                continue;
            }
        }
        cout<<profit<<endl;

    }

    return 0;
)