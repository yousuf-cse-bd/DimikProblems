///Dimik Problem 1
///Author: Muhammad Yousuf Ali
///Since: 12/12/19

#include <iostream>
using namespace std;

int main()
{
    int t,num;
    cin>>t;
    while(t>0)
    {
        cin>>num;
        if(num % 2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        t--;
    }


    return 0;
}

