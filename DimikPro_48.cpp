/**
 * @file DimikPro_48.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find a missing number from array.
 * @version 0.1
 * @date 2022-07-22
 * @since Friday, 5:25 AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int testCase;
    cin>>testCase;
    while(testCase --){
        unsigned int n;
        cin>>n;
        bool status[n+1];
        memset(status, false, sizeof(status));
        int num, missing;
        /*Enter a number and set as status array index wise and the array assigned by true*/
        for(unsigned int i = 1; i<=n-1; i++){
            cin>>num;
            status[num] = true;
        }
        /*Check the array any element is false? if false then missing number exist*/
        for(unsigned int i = 1; i<=n; i++){
            if(status[i] == false){
                missing = i;
                break;
            }
        }
        cout<<missing<<endl;
    }
    
    
    return 0;
}
