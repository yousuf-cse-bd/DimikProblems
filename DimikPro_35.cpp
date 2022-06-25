/**
 * @file DimikPro_35.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Out of circle
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;
/*Calculate 2D distance of 2 points*/
double distanceBetweenToPoints(int x1, int x2, int y1, int y2){
    double d = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    d = sqrt(d);
    return d;
}

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter the test case: ";
    cin>>testCase;
    while(testCase --){
        cout<<"Enter your centre values: ";
        int xc1, yc1;
        cin>>xc1>>yc1;
        cout<<"Enter the radius of the cricle: ";
        int r;
        cin>>r;
        cout<<"Enter the another point values: ";
        int x2, y2;
        cin>>x2>>y2;
        double d = distanceBetweenToPoints(xc1, x2,  yc1, y2);
        if(r < d){
            cout<<"The point is not inside the circle"<<endl;
        }
        else{
            cout<<"The point is inside the circle"<<endl;
        }

    }
    
    
    return 0;
}
