/**
 * @file DimikPro_42.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 2^10 + 2^9 + 2^8 + 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1
 * @version 0.1
 * @date 2022-06-29
 * @since Wednesday; 8.56 AM
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
    while(testCase--){
        unsigned int n;
        cout<<"Enter nTh value here: ";
        cin>>n;
        for(int i = 10; i>=0; i--){
            if(i == 0){
                cout<<" 1 "<<endl;
            }
            else if(i == 1){
                cout<<"2 +";
            }
            else{
                cout<<"2^"<<i<<" + ";
            }
        }   
    }
    
    return 0;
}
