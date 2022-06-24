/**
 * @file DimikPro_31Next.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Prime numbers
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
    int count = 0;
    unsigned int primeNumbers[5] = {6, 28, 496, 8128, 33550336};
    int N;
    cout<<"1 to Nth prime number: ";
    cin>>N;
    for(short unsigned int i = 0; i<5; i++){
        if(primeNumbers[i] <= N){
            cout<<primeNumbers[i]<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
