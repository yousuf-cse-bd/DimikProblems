/**
 * @file DimikPro_16.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief  Distinc words and reverse individual word
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase, i,j;
    cout<<"Enter Test Case Value: ";
    cin>>testCase;

    char S[1002];
    char word[10002];
    while(testCase --){
        cout<<"Enter Line: ";
        scanf(" %[^\n]", S);
        // char ch = getchar();
        // gets(S);

        // cout<<strlen(S)<<endl;
        
        for(i = 0, j = 0; S[i] != '\0'; i++){
            // if not space then store ot word
            if(S[i] != ' '){
                word[j] = S[i];
                ++j;
            }
            else{
                word[j] = '\0';
                printf("%s ", strrev(word));
                j = 0;
            }
        }
        if(j > 0){
            word[j] = '\0';
            printf("%s\n", strrev(word));
        }
        
    }

    return 0;
}
