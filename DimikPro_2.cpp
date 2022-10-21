/**
 * @file DimikPro_2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check odd-even from big integer like 100 digits
 * @version 0.1
 * @date 2022-10-21
 * @since FriDay; 05:26 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned short int stringLength(const char *number){
    unsigned short int length = 0;
    while(*(number+length)){
        length++;
    }
    return length;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int testCase;
    cin>>testCase;
    char number[101];

    while(testCase --){
        cin>>number;
        /*Finding last digit (ones) or ekok, which is even or odd*/
        if((number[stringLength(number)-1]-'0') % 2 == 0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
    
    return 0;
}
