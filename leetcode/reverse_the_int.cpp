// https://leetcode.com/problems/reverse-integer/

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long num = x, rev = 0;
        if(num<0){
            num = - num;
        }

        while(num>0){
            rev = rev * 10 + num % 10;
            num = num / 10;
        }

        if(rev>INT_MAX||rev<INT_MIN) 
            return 0;
        else{
            if(x<0)
                return -rev;
            else
                return rev;
        }
    }
};
int main() {  
    Solution s1;
    long long rev;

    rev = s1.reverse(1534236469);
    cout<<"reverse is "<<rev;
    return 0; 
} 