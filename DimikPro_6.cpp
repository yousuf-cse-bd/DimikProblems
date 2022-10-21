/**
 * @file DimikPro_6.cpp
 * @author your name (you@domain.com)
 * @brief Summation of msd and lsd from a decimal number
 * @version 0.1
 * @date 2019-12-12
 * @since ThursDay; 10:27 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int num, lsd, msd, sum, T;
    cin>>T;
    while(T--){
        sum = 0;
        cin>>num;
        lsd = num % 10;
        while(num != 0){
            msd = num % 10;
            num = num / 10;
        }
        sum = msd + lsd;
        cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}

