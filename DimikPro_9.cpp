#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{

    int number,t, tmp;
    cin>>t;
    while(t>0)
    {
        cin>>number;
        tmp = sqrt(number);
        if(number == pow(tmp,2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        t -- ;
    }

    return 0;
}
