/**
 * @file DimikPro_21.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Reverse a string
 * @version 0.1
 * @date 2022-06-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string line;
    int testCase;
    cout<<"Enter The Test Case: ";
    cin>>testCase;
    char extarChar = getchar();
    // printf("The exta char %d\n", extarChar);
    while(testCase --){
        cout<<"Enter the line: ";
        getline(cin, line);
        reverse(line.begin(), line.end());
        cout<<line<<endl;
    }
   
    return 0;
}
