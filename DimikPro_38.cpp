/**
 * @file DimikPro_38.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Diamond Shape
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

void diamondShape(unsigned int n , unsigned int m){
    for(unsigned int row = 1; row<=n; row++){
        for(unsigned int column = 1; column <= row; column++){
            cout<<m<<' ';
        }
        cout<<endl;
    }
    for(unsigned row = n - 1; row >= 1; row--){
        for(unsigned int column = 1; column<=row; column++){
            cout<<m<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter test case: ";
    cin>>testCase;
    while(testCase --){
        unsigned int n, m;
        cout<<"Enter n and m valuse resepectively:\n";
        cin>>n>>m;

        cout<<"\n";
        diamondShape(n, m);
        cout<<endl;

    }

    return 0;
}
