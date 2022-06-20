///Author: Muhammad Yousuf Ali
///Since: 13/12/2019

#include <iostream>
using namespace std;

int main(void)
{
    int i,t;
    cin>>t;
    i = 1;
    while(i<=t)
    {
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
        if(num1>num2)
        {
            swap(num1,num2);
        }
        if(num1>num3)
        {
            swap(num1,num3);
        }
        if(num2>num3)
        {
            swap(num2,num3);
        }
        cout<<"Case "<<i<<": ";
        cout<<num1<<" "<<num2<<" "<<num3<<endl;

        i++;
    }


    return  0;
}
