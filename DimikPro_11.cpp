/**
 * @file DimikPro_11.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Generate factorial value max 15
 * @version 0.1
 * @date 2022-10-23
 * @since 04:37 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int t, n;
    unsigned long long int fact;
    cin>>t;
    while(t--){
        cin>>n;
        fact = 1;
        for(unsigned short int i = 2 ; i <=n ; i++){
            fact = fact * i;
        }
        cout<<fact<<endl;
    }
    return 0;
}
