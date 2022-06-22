/**
 * @file DimikPro_19.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Word counter
 * @version 0.1
 * @date 2022-06-22
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
    cout<<"Enter test case: ";
    cin>>testCase;

    char S[10001];
    while(testCase -- ){
        unsigned int count = 1;
        cout<<"Enter the line: ";
        scanf(" %[^\n]", S);
        for(unsigned int i = 0; S[i] != '\0'; i++){
            if(S[i] == ' ' && S[i+1] != ' '){
                // Simple one space counter
                ++count;
            }
        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
}
