#include <iostream>
using namespace std;

int main()
{
    int t,i,n;
    long long int fact = 1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 2 ;i<=n;i++)
        {
            fact = fact * i;
        }
        cout<<fact<<endl;
        fact = 1;
    }

    return 0;
}
