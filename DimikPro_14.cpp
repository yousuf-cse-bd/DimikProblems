/**
 * @file DimikPro_14.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
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
    char firstLine[10001];
    char seconadLine[2];
    cout<<"Enter test case: ";
    cin>>testCase;
    while(testCase --){
        cout<<"Enter first line: ";
        scanf(" %[^\n]", firstLine);
        cout<<"Enter second line: ";
        cin>>seconadLine;
        unsigned int count = 0;
        for(unsigned int i = 0; firstLine[i] != '\0'; i++){
            if(firstLine[i] == seconadLine[0]){
                ++count;
            }
        }
        if(count){
            cout<<"Occurrence of '"<<seconadLine<<"' in '"<<firstLine<<"' = "<<count<<endl;
        }
        else{
            cout<<"'"<<seconadLine<<"' is not present"<<endl;
        }
        count = 0;
    }
    
    
    return 0;
}
