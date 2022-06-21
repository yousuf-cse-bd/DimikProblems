/**
 * @file DimikPro_15.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief WAP Letter count from a sentence
 * @version 0.1
 * @date 2022-06-21
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
    char line[1001];
    
    cout<<"Enter test case: ";
    cin>>testCase;

    while(testCase --){
        cout<<"Enter the line: ";
        scanf(" %[^\n]", line);
        int count[26] = {0};
        for(unsigned int i = 0; line[i] != '\0'; i++){
            if(line[i] >= 'a' && line[i]<= 'z'){
                count[line[i] - 'a']++;
            }
        } 
        for(unsigned int i = 0; i<26; i++){
            if(count[i] != 0){
                printf("%c = %d\n", 'a'+i, count[i]);
            }
        }
        // for(unsigned int i = 0; i<26; i++){
        //     count[i] = 0;
        // }
    }

    
    return 0;
}
