/**
 * @file DimikPro_26.cpp
 * @author Md. Yousuf Ali(yousuf.cse17@gmail.com)
 * @brief Eliyen Guppi
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while(testCase -- ){
        double x,y;
        unsigned int count = 0;
        cout<<"Enter x value: ";
        cin>>x;
        while(x > 1.00){
            x /= 2.0;
            count ++;
        }
        cout<<count<<" days"<<endl;
    }
    return 0;
}
