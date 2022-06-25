/**
 * @file DimikPro_33.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Division ability
 * @version 0.1
 * @date 2022-06-25
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
        unsigned int A, B,C;
        cout<<"\tEnter A , B. & C  values respectively: ";
        cin>>A>>B>>C;
        for(unsigned int i = A; i<=B; i++){
            if(i % C == 0){
                cout<<i<<"\n";
            }
        }
        cout<<endl;
    }
    return 0;
}
