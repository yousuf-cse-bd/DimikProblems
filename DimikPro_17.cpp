/**
 * @file DimikPro_17.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Distinc vowels ansd consonants
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
    string vowels, consonants;
    int testCase;
    char S[10001];
    cout<<"Enter test case: ";
    cin>>testCase;
    char ch = getchar();
    while(testCase --){
        cout<<"Enter your line: ";
        gets(S);
        // scanf(" %[^\n]", S);
        for(unsigned int i = 0; S[i] != '\0'; i++){
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                vowels.push_back(S[i]);
            }
            else if(S[i] != ' '){
                consonants.push_back(S[i]);
            }
        }
        // Printing vowel and consonant respectively
        cout<<vowels<<endl;
        cout<<consonants<<endl;
        
    }
    return 0;
}
