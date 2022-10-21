/**
 * @file DimikPro_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find maximum divisor
 * @version 0.1
 * @date 2019-09-17
 * @since: TuesDay; 10:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
    unsigned short int testCase;
    unsigned int i,j,num;
    //cout<<"Enter TestCase: ";
    cin>>testCase;

    j = 1;
    while(j <= testCase){
        cin>>num;
        cout<<"Case "<<j<<":";
        for(i = 1 ;i<=num; i++){
            if(num % i == 0){
                cout<<" "<<i;
            }
        }
        j++;
        cout<<endl;
    }
    
    return 0;
}
