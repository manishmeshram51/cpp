#include <iostream>
using namespace std;


void reverse(int a[],int s,int n){
    int low = s;
    int high = n - 1;
    
    while(low<high){
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        
        low++;
        high--;
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int d;
	    cin>>d;
	    
	    //rotating logic here
	    reverse(a,0,d);
	    reverse(a,d,n);
	    reverse(a,0,n);
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}