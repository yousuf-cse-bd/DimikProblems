/**
 * @file DimikPro_7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Count number from string
 * @version 0.1
 * @date 2019-09-13
 * @since FriDay; 10:27 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
    char line[100000];
    int testCase, count;
    cout<<"Enter TestCase Value Here: ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        char *p, *e;
        cout<<"Enter Line: ";
        cin.getline(line, 100000);
        cout<<"Entered Line: "<<line<<endl;
        count = 0;
        for (p = line; ; p = e){
            strtol(p, &e, 10); /*string to long*/
            if(p==e){
                break;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
