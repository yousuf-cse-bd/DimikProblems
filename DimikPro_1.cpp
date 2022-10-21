/**
 * @file DimikPro_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple odd even a positive integer
 * @version 0.1
 * @date 2019-12-12
 * @since ThursDay; 10:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int t;
    unsigned int number;
    cin>>t;
    while(t--){
        cin>>number;
        if(number % 2 == 0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}


