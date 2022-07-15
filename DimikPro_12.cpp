/**
 * @file DimikPro_12.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

unsigned int fiveCounter(unsigned int n){
    unsigned int count = 0;
    unsigned int result;
    while(true){
       result = n / 5;
       ++count;
       /*If result will be these multplication then to needed other wise throwing*/
       if(result == 5 || result == 10 || result == 15 || result == 20){
            /*Upon result setup 5 + 10 + 15 + 20 for n == 100*/
            n = result;
       }
       else{
            break;
       }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter the test case here: ";
    cin>>testCase;
    while(testCase--){
        unsigned int n;
        cout<<"Enter n value here: ";
        cin>>n;
        unsigned int numberOfFive = 0;
    
        vector <unsigned int> V;
        /*Load all FIVE multiplication*/
        for(unsigned int i = 5; i<=n; i = i + 5){
            V.push_back(i);
        }
        /*Number of FIVE counting*/
        for(unsigned int i = 0; i<V.size(); i++){
            numberOfFive += fiveCounter(V[i]);
        }
        cout<<numberOfFive<<endl;
    }
   
    return 0;
}
