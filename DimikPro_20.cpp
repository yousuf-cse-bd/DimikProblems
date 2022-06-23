/**
 * @file DimikPro_20.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
// #include <cstdlib>
// #include <cstring>
// #include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int testCase;
    cout<<"Enter test case: ";
    cin>>testCase;

    char S[10001];
    char str[] = "'";
   
    while(testCase -- ){
        unsigned int count = 1;
        cout<<"Enter the line: ";
        scanf(" %[^\n]", S);
        // char word[10001] = strtok(S, ",!;?. ");
        for(unsigned int i = 0; S[i] != '\0'; i++){
            if(S[i] == ' '){
                ++count;
            }
            if(S[i] == '?'){
                ++count;
            }
            if(S[i] == str[0]){
                ++count;
            }    
             if(S[i] == '.'){
                ++count;
            }
            if(S[i] == ';'){
                ++count;
            }
            if(S[i] == '!'){
                ++count;
            }
        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
}