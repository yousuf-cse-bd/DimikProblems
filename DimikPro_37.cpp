/**
 * @file DimikPro_37.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Natural number reverse order
 * @version 0.1
 * @date 2022-06-26
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
    cout<<"Enter the test case: ";
    cin>>testCase;
    while(testCase --){
        int N;
        unsigned int sum = 0;
        cout<<"Enter the number here: ";
        cin>>N;
        while(N != 0){
            int digitWise = N % 10;
            sum = (sum * 10) + digitWise;
            N /= 10;
        }
        cout<<sum<<endl;
    }
    

    return 0;
}
