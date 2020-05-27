// 2 arithmatic operators for 2 numbers 2 nd program

#include <iostream>
using namespace std;

int main()
{
    /* code */
    int firstNum,secondNum;
    cout<<"Enter first number:"<<endl;
    cin>>firstNum;

    cout<<"Enter first number: "<<endl;
    cin>>secondNum;

    cout<<"The sum of 2 numbers is :"<<firstNum + secondNum<<endl;
    cout<<"The diff of 2 numbers is :"<<firstNum - secondNum<<endl;
    cout<<"The multi of 2 numbers is :"<<firstNum * secondNum<<endl;

    float div = (secondNum == 0) ? -1 : (float) firstNum / secondNum ;
    cout<<"The div of 2 numbers is :"<<div <<endl;


    return 0;
}
