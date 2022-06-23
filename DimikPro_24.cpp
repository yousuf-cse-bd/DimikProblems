/**
 * @file DimikPro_24.cpp
 * @author Md. Yousuf Ali (yousif.cse17@gmail.com)
 * @brief Alternate elements from array
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    vector <int> V;
    int testCase;
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while(testCase --){
        int element, N;
        cout<<"Ener Nth value here: ";
        cin>>N;
        cout<<"Enter element:";
        for(unsigned int i = 0; i<N; i++){
            cin>>element;
            V.push_back(element);
        }
        //main logic
        for(unsigned int i = 0; i < V.size(); i = i + 2){
            cout<<V[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

