/**
 * @file DimikPro_22.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Prime number, Sieve algorithm
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
#define size 100001
bool primeNumbers[size];

/*Implemenation of Sieve algorithm*/
void sieveAlgorithm(){
    // let consider all elements are prime
    for(unsigned int i = 2; i<size; i++){
        primeNumbers[i] = true;
    }
    for(unsigned int i = 2; i*i <= size; i++){
        if(primeNumbers[i]){
            // If any number is prime then that multiple number will ot prime
            for(unsigned int j = 2; j*i <= size; j++){
                primeNumbers[i * j] = false;
            }
        }
    }
}

/*Driver code*/
int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    unsigned int startLimit,endLimit;
    cout<<"Enter TestCase: ";
    cin>>testCase;

    // function call
    sieveAlgorithm();
    while(testCase --){
        cout<<"Enter Start Limit: ";
        cin>>startLimit;
        cout<<"Enter End Limit: ";
        cin>>endLimit;

        unsigned int count = 0;
        // long long int sum = 0;
        for(unsigned int i = startLimit; i <= endLimit; i++){
            if(primeNumbers[i]){
                // cout<<i<<" ";
                // sum += i;
                count++;
            }
        }
        cout<<count<<endl;
        // cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}
