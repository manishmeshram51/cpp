//https://www.codechef.com/LRNDSA01/problems/LAPIN
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
string lapin(string s){
    int l[26] = {0};
	int r[26] = {0};
	    
    int n = s.length();
	    if(n==1){
            return "YES";
        }
        else{
            // cout<<"ssssss"<<s[0]-'a'<<endl;
	        for(int i = 0; i<n/2;i++){
                l[s[i] - 'a']++;
                r[s[n-i-1] - 'a']++;
            }
            for(int i = 0; i<26;i++){
                if(r[i]!=l[i]){
                    return "NO";
                }
            }
            return "YES";
        }
}
int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
        cout<<lapin(s)<<"\n";
	}
	return 0;
}