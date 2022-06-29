/**
 * @file DimikPro_43.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate P^Q mod R
 * @version 0.1
 * @date 2022-06-29
 * @since WednesDay, 9:30 AM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

unsigned int naturalPower(unsigned int p,unsigned int q){
    unsigned int powerValue = 1;
    for(unsigned int i = 1; i<=q; i++){
        powerValue = powerValue * p;
    }
    return powerValue;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while(testCase --){
        unsigned p,q,r;
        cout<<"Enter p, q, r respectively: ";
        cin>>p>>q>>r;
        unsigned int result = naturalPower(p, q) % r;
        cout<<"Result = "<<result<<endl;
    }
    
    
    return 0;
}
