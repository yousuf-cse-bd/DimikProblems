/**
 * @file DimikPro_32.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
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
    cout<<"Enter test case: ";
    cin>>testCase;
    while(testCase --){
        unsigned int startPoint, endPoint;
        cout<<"Enter start and end values:";
        cin>>startPoint>>endPoint;
        if(startPoint > endPoint){
            cout<<"Invalid"<<endl;
        }
        for(int i = startPoint; i<= endPoint; i = i + startPoint){
            cout<<i<<"\n";
        }
        cout<<endl;
    }
    


    return 0;
}
