/**
 * @file DimikPro_3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Descending order loop
 * @version 0.1
 * @date 2019-09-17
 * @since TuesDay; 08:35
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
    unsigned short int count = 0;
    for(int i = 1000;i>=1;i--){
        count ++;
        if(count % 5 != 0){
            cout<<i<<" ";
        }
        else{
            cout<<i<<endl;
        }
    }

    return 0;
}
