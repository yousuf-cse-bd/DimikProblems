/**
 * @file DimikPro_29.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Char addressing
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
    cout<<"Enter Test Case Here: ";
    cin>>testCase;
    char newLine;
    //Store a new line
    newLine = getchar();
    while(testCase -- ){
        cout<<"\tEnter a Character Here: ";
        char ch;
        cin>>ch;
        if(islower(ch)){
            cout<<"Lowercase Character"<<endl;
        }
        else if(isupper(ch)){
            cout<<"Uppercase Character"<<endl;
        }
        else if(isdigit(ch)){
            cout<<"Numerical Digit"<<endl;
        }
        else if(ispunct(ch)){
            cout<<"Special Character"<<endl;
        }
    }
    return 0;
}
