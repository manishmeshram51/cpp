//https://www.codechef.com/LRNDSA01/problems/ZCO14003
#include <bits/stdc++.h>
using namespace std;
# define ll long long

const int N  = 1e6 +5;

int A[N];

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i = 0;i<n;i++){
	    cin>>A[i];
	}
	
	sort(A,A+n);
	ll ans = 0;
	for(int i= 0;i<n;i++){
	    ans = max(ans, (n-i) * 1ll * A[i]);
	}
	
	cout<<ans<<"\n";
	return 0;
}
