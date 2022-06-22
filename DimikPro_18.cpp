/**
 * @file DimikPro_18.cpp
 * @author Md. Yousuf Ali (youusuf.cse17@gmail.com)
 * @brief Vowel counter
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
    while(testCase --){
        cout<<"Enter line: ";
        scanf(" %[^\n]", S);
        unsigned int count = 0;
        for(unsigned int i = 0; S[i] != '\0'; i++){
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                ++count;
            }
        }
        cout<<"Number of vowels = "<<count<<endl;
    }
    return 0;
}
