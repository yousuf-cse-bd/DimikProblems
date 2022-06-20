/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 17 September 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int i;
    int count = 0;
    for(i = 1000;i>=1;i--)
    {
         count ++;
        if(count % 5 != 0)
        {
            cout<<i<<"\t";
        }
        else
        {
            cout<<i<<endl;
        }
        
    }

    return 0;
}
