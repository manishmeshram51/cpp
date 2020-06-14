//https://www.codechef.com/LRNDSA01/problems/LADDU
#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,laddus=0;;
	    string nation;
	    cin>>n>>nation;
	    
	    for(int i=0;i<n;i++){
	        string type;
	        cin>>type;
	        
	        if(type=="CONTEST_WON"){
	            int rank;
	            cin>>rank;
	            
	            laddus += 300;
	            if(rank<20)
	                laddus += 20 - rank;
	            
	        }
	        else if(type=="TOP_CONTRIBUTOR")
	            laddus += 300;
	            
	        else if(type=="BUG_FOUND"){
	            int severe;
	            cin>>severe;
	            
	            laddus += severe; 
	        }
	        else if(type=="CONTEST_HOSTED")
	            laddus += 50;
	    }
	   // cout<<"xxx"<<laddus<<endl;
	    if(nation=="INDIAN")
	        cout<<laddus/200<<"\n";
	    else
	        cout<<laddus/400<<"\n";
	    
	}
	return 0;
}
