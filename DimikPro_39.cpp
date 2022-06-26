/**
 * @file DimikPro_39.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Palindrome string
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

void palindromeString(char string1[]){
    for(unsigned int index = 0, i = strlen(string1) - 1; index < strlen(string1); index++, i--){
        string1[i] = string1[index];
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter the test case: ";
    cin>>testCase;

    while(testCase--){
        char string1[1001];
        char string2[1001];
        cout<<"Enter your string: ";
        cin>>string1;
        strcpy(string2, string1);
        palindromeString(string1);

        if(strcmp(string1, string2) == 0){
            cout<<"Yes! It is Palindrome!"<<endl;
        }else{
            cout<<"Sorry! It is not Palindrome"<<endl;
        }
    }
    return 0;
}
