/**
 * @file DimikPro_33.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Division ability, optimal
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
unsigned int myLCM(unsigned int num1, unsigned int num2);
unsigned int myGCD(unsigned int num1, unsigned int num2);

unsigned int myGCD(unsigned int num1, unsigned int num2){
    unsigned int remainder;
    while(num2 != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder; 
    }

    return num1;
}
unsigned int myLCM(unsigned int num1, unsigned int num2){
    unsigned int lcm = (num1 * num2) / myGCD(num1, num2);
    return lcm;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while(testCase --){
        unsigned int A,B,C;
        cout<<"\tEnter A , B, & C  values respectively: ";
        cin>>A>>B>>C;
        for(unsigned int i = myLCM(A, B); i<=C; i = i + myLCM(A,B)){
            cout<<i<<"\n";
        }
        cout<<endl;
    }
    
    return 0;
}
