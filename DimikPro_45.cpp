/**
 * @file DimikPro_45.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pascal's triangle 2 using 2D array
 * @version 0.1
 * @date 2022-07-21
 * @since Thursday, 5: 04 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace  std;

int main(int argc, char const *argv[])
{
    /* code */
    long long int pascals[51][51];
    unsigned int i, j;

    for(i = 1; i<=10; i++){
        pascals[i][0] = 1;
        for(j = 1; j<i - 1; j++){
            pascals[i][j] = pascals[i-1][j-1] + pascals[i-1][j];
        }
        pascals[i][j] = 1;
    }

    for(i = 0; i<10; i++){
        for(j = 0; j<i; j++){
            cout<<pascals[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
