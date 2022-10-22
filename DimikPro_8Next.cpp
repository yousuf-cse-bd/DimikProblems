/**
 * @file DimikPro_8Next.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Print ascending order three numbers without any sorting algorithm
 * @version 0.1
 * @date 2022-10-22
 * @since SaturDay; 07:01 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int testCase;
    cin>>testCase;
    for(register unsigned short int i = 1; i <= testCase; i++){
        int n1, n2, n3;
        cin>>n1>>n2>>n3;
        cout<<"Case "<<i<<": ";
        if((n1 <= n2) && (n2 <= n3)){
            // cout<<"1: 1 2 3"<<endl;
            cout<<n1<<" "<<n2<<" "<<n3<<endl;
        }else if((n1 >= n2) && (n2 >= n3)){
            // cout<<"2: 3 2 1"<<endl;
            cout<<n3<<" "<<n2<<" "<<n1<<endl;
        }else if((n3 <= n2) && (n1 <= n3)){
            // cout<<"3: 1 3 2"<<endl;
            cout<<n1<<" "<<n3<<" "<<n2<<endl;
        }else if((n1 >= n2) && (n1 <= n3)){
            // cout<<"4: 2 1 3"<<endl;
            cout<<n2<<" "<<n1<<" "<<n3<<endl;
        }else if((n1 <= n2) && (n1 >= n3)){
            // cout<<"5: 2 3 1"<<endl;
            cout<<n3<<" "<<n1<<" "<<n2<<endl;
        }else{
            // cout<<"6: 3 1 2"<<endl;
            cout<<n2<<" "<<n3<<" "<<n1<<endl;
        }
    }
    return 0;
}
