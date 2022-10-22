/**
 * @file DimikPro_9.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check a positive number is square or not
 * @version 0.1
 * @date 2022-10-22
 * @since SaturDay; 02:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int t;
    unsigned int number, tmp;
    cin>>t;
    while(t--){
        cin>>number;
        tmp = sqrt(number);
        if(number == pow(tmp,2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
