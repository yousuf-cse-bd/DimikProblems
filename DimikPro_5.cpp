/**
 * @file DimikPro_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Make square box. It got presentation error
 * @version 0.1
 * @date 2019-09-17
 * @since TuesDay; 10:10 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
    short int i ,j ,num, testCase;

    cin>>testCase;
    while(testCase--){
        cin>>num;
        for(i = 1 ; i<=num;i++){
            for(j = 1 ; j<=num;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
