/**
 * @file DimikPro_30.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Perfect number not perfecty
 * @version 0.1
 * @date 2022-06-24
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
    cout<<"Enter test case here: ";
    cin>>testCase;
    while(testCase --){
        unsigned long long int N, sum = 0;
        cout<<"Enter the number?: ";
        cin>>N;
        for(unsigned int i = 1; i < N; i++){
            if(N % i == 0){
                sum = sum + i;
            }
        }
        if(sum == N){
            cout<<"YES, "<<N<<" is a perfect number!"<<endl;
        }
        else{
            cout<<"NO, "<<N<<" is not a perfect number!"<<endl;
        }
    }
    return 0;
}
