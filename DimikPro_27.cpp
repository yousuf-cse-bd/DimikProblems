/**
 * @file DimikPro_27.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Armstrong number
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

bool checkArmstrongNumber(int num){
    /*The greater the number, the greater the power*/
    string number = to_string(num);
    // cout<<"Lengtt Digit: "<<number.length()<<endl;
    unsigned int sum = 0;
    int temp = num;
    while(temp != 0){
        unsigned int digitWise = temp % 10;
        sum = sum + (digitWise * digitWise * digitWise);
        temp /= 10;
    }
    if(sum == num){
        return true;
    }else{
        return false;
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter the test case: ";
    cin>>testCase;
    while(testCase -- ){
        int num;
        cout<<"Enter the number to check Armstrong?: ";
        cin>>num;
        if(checkArmstrongNumber(num)){
            cout<<"\t";
            cout<<num<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<"\t";
            cout<<num<<" is not an armstrong number!"<<endl;
        }
    }

    return 0;
}
