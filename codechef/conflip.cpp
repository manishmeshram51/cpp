#include <iostream>
using namespace std;

#define ll long long

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int I, G, Q;
        ll N;
        cin >> G;

        // cout << "Debug" << G << " " << I << " " << N << " " << G << endl;
        ll head, tail;
        while (G--)
        {
            cin >> I >> N >> Q;
            
            int ans = N/2;

            if(I==1 && Q==1){
                ans = ans;
            }
            else if(I==1 && Q==2){
                ans = N - ans;
            }
            else if(I==2 && Q==1){
                ans = N - ans;
            }
            else if(I==2 && Q==2){
                ans = ans;
            }
            else{
                //do nothing;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
