/**
 * @file DimikPro_46.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Area of triangle, S = (a + b + c)/2
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter test case here: ";
    cin>>testCase;
    while(testCase--){
        int a, b, c;
        double area, s;
        cout<<"Enter three arms of triangl:"<<endl;
        cin>>a>>b>>c;
        if(a + b > c){
        s = (int)((a + b + c)/2.0);
        area = s*(s - (int)a);
        area = area * (s - (int)b);
        area = area * (s - (int)c);
        area = sqrt(area);
        printf("%.3lf\n", area);
        }else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}
