/**
 * @file DimikPro_25.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief GCD and LCM
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int myGCD(int num1, int num2){
    int rem;
    while(num2 != 0){
        rem = num1 % num2;
        // cout<<"Rem = "<<rem<<endl;
        num1 = num2;
        // cout<<"Num1 = "<<num1<<endl;
        num2 = rem;
        // cout<<"Num2 = "<<num2<<endl;
    }
    return num1;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter Test Case: ";
    cin>>testCase;

    while(testCase -- ){
        int num1, num2;
        long long int mult;
        cout<<"Enter num1, num2 respectivety: ";
        cin>>num1>>num2;
        mult = num1 * num2;

        cout<<"LCM: "<<mult / myGCD(num1, num2)<<endl;
    }
    return 0;
}
