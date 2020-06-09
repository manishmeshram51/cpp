// https://leetcode.com/problems/palindrome-number/

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long num = x, rev = 0;
        
        if(x<0)
            return false;
        
        while(num>0){
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
       
        if(rev == x)
            return true;
        else
            return false;
    }
};

int main() {  
    Solution s1;
    bool pal;

    pal = s1.isPalindrome(121);
    cout<<"is palli "<<pal;
    return 0; 
} 