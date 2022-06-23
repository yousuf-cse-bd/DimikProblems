/**
 * @file DimikPro_23.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Alphabet to numbers
 * @version 0.1
 * @date 2022-06-23
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
    string line;
    char newLine = getchar();
    while(testCase --){
        cout<<"Enter a Line Here: ";
        getline(cin, line);
        for(unsigned int i = 0; line[i] != '\0'; i++){
            if(islower(line[i])){
                line[i] = toupper(line[i]);
                if(line[i] >= 'A' && line[i] <= 'Z'){
                    printf("%d", line[i] - 64);
                }
            }else{
                if(line[i] >= 'A' && line[i] <= 'Z'){
                    printf("%d", line[i] - 64);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
