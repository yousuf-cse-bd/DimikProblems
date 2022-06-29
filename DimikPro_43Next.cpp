/**
 * @file DimikPro_43.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate P^Q mod R
 * @version 0.1
 * @date 2022-06-29
 * @since WednesDay, 6:6 PM
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
    while(testCase --){
        unsigned p,q,r;
        cout<<"Enter p, q, r respectively: ";
        cin>>p>>q>>r;
        unsigned int result = 1;
        for(unsigned int i = 1; i<=q; i++){
            result = (result * p) % r;
        }
        cout<<"Result = "<<result<<endl;
    }
    
    
    return 0;
}
