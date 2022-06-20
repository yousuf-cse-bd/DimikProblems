/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 17 September 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    short i,j,num,testCase;

    cin>>testCase;
    while (testCase>0)
    {
        cin>>num;
        for(i = 1 ; i<=num;i++)
        {
            for(j = 1 ; j<=num;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        testCase--;
        // cout<<"\n"<<endl;
    }
    


    return 0;
}
