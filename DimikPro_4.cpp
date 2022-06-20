/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 17 September 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int  testCase,i,j,num;
    //cout<<"Enter TestCase: ";
    cin>>testCase;

    j = 1;
    while(j<=testCase)
    {
        cin>>num;
        cout<<"Case "<<j<<":";
        for(i = 1 ;i<=num; i++)
        {
            if(num % i == 0)
            {
                cout<<" "<<i;
            }
        }
        j++;
        cout<<endl;
    }
    
    



    return 0;
}
