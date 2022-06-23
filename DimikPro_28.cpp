/**
 * @file DimikPro_28.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Descent Array
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

bool descentArray(int A[], int N){
    bool status = true;
    for(unsigned int  i = 0; i<N-1; i++){
        if(A[i] > A[i+1]){
            status = false;
            break;
        }
    }
    if(status){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter your test case: ";
    cin>>testCase;
    while(testCase -- ){
        int N;
        cout<<"Enter Nth value: ";
        cin>>N;
        int A[N];
        cout<<"Enter elements:"<<endl;
        for(unsigned int i = 0; i<N; i++){
            cin>>A[i];
        } 
        if(descentArray(A, N)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
