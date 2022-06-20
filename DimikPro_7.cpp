///Author: Muhammad Yousuf Ali
///Since: 13/12/2019

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    char line[100000];
    int testCase, count;
    cout<<"Enter TestCase Value Here: ";
    cin>>testCase;
    cin.ignore();
    while(testCase--)
    {
        char *p, *e;
        cout<<"Enter Line: ";
        cin.getline(line, 100000);
        cout<<"Entered Line: "<<line<<endl;
        count = 0;
        for (p = line; ; p = e)
        {
            strtol(p, &e, 10);
            if(p==e)
            break;
            else
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}
