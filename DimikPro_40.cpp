/**
 * @file DimikPro_40.cpp
 * @author Md. Yousuf Ali (youusuf.cse17@gmail.com)
 * @brief Normal Series
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter the test case: ";
    cin>>testCase;
    while(testCase --){
        unsigned int x,k,sum = 1, power = 1;
        cout<<"Enter x and k values:"<<endl;
        cin>>x>>k;
        for(unsigned int i = 1; i<=k; i++){
            power = power * x;
            sum = sum + power;
        }
        cout<<"Result = "<<sum<<endl;
    }
    return 0;
}
