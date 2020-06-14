//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    ll n;
	    cin>>n;
	    
	    ll ans = 0;
	    ll cur = 5;
	    
		// just calculated the factors of 5 bcz trailing zero means number must be divisible by 10 and 10 is 5 * 2
		// so consider 10! example here 
		// 10! = 1*2*3*4*5*6*7*8*9*10
		// 10! = 1*2*3*(2*2)*5*(2*3)*7*(2*4)*9*(2*5)
		// so here there are6 factors of 2 and 2 facors of 5  
		// so trailing zero will be min(factors of 2 , factors of 5)
		// now we can see that 25 has 2 factoes of 5 and 125 has 3 factors of 5
		// so we'll juts find the training zero = [n/5] +[n/25]+[n/125] till  [n/5^k] ecomes zero

	    while(cur<=n){
	        ans = ans + (n/cur);
	        cur = 5 * cur;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
