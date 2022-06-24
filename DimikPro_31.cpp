/**
 * @file DimikPro_31.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pefect number
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
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while(testCase --){
        int num, N;
        unsigned int i,sum;
        cout<<"Enter the number: ";
        cin>>N; 
        for(num = 2; num <= N; num++){
            sum = 1; // sum = 1 that's why i = 2
            for(i = 2; i*i <= num; i++){
                if(num % i == 0){
                    sum = sum + i + num / i;
                }
            }
            if(sum == num){
                cout<<"\tPerfect Numbers: "<<num<<"\n";
            }
        }
    }
    
    return 0;
}
