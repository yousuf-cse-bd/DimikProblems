/**
 * @file DimikPro_41.cpp
 * @author Md. Youauf Ali (yousuf.cse17@gmail.com)
 * @brief Summation of the given series
 * @version 0.1
 * @date 2022-06-29
 * @since Morning, 8.10AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned int n){
    unsigned long long int mult = 1;
    for(unsigned int i = 1; i<=n; i++){
        mult = mult * i;
    }
    return mult;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter Test Case Here: ";
    cin>>testCase;
    while(testCase --){
        unsigned int n;
        cout<<"Enter Nth number: ";
        cin>>n;
        double sum = 0.0;
        for(unsigned int i = 1 ;i<=n; i++){
            sum = sum + ((double)i/factorial(i));
        }
        printf("%.4lf\n", sum);
    }
    
    return 0;
}
