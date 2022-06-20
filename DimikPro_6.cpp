///Dimik Problem 6
///Author: Muhammad Yousuf Ali
///Since: 12/12/19

#include <iostream>
using namespace std;

int main()
{
    int num, lsd,msd,div,sum,T;
    cin>>T;
    while(T>0)
    {
        sum = 0;
        cin>>num;
        lsd = num % 10;
        while(num!=msd)
        {
            div = num / 10;
            msd = div % 10;
            num = div;
        }

        sum = msd + lsd;
        cout<<"Sum = "<<sum<<endl;
        sum = 0;

        T--;
    }

    return 0;
}

