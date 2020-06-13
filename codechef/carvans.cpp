//https://www.codechef.com/LRNDSA01/problems/CARVANS

#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int main(){
// fast io
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        
        int count = 0;
        int speedPrev = arr[0];
        
        for(int i = 0; i<n; i++){
            if(speedPrev>=arr[i]){
                speedPrev = arr[i];
                count++;
            }
        }
        cout<<count<<"\n";
        
    }
    return 0;
}