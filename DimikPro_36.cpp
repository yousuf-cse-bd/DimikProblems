/**
 * @file DimikPro_36.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sorting technique
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

/*Insertion sorting algorithm(Ascending-Order)*/
void insertionSort(char items[][10001], unsigned int size){
    for(unsigned int i = 1; i<size; i++){
        unsigned int j = i;
        // Here, name[j - 1]: Given Array whic is bigger and swap
        // Here, name[j]: SubArray
        while(j>0 && strcmp(items[j-1], items[j])>0){
            swap(items[j], items[j-1]);
            j--;
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cout<<"Enter you test case: ";
    cin>>testCase;
    while(testCase--){
        unsigned int size;
        cout<<"Enter the array size: ";
        cin>>size;
        char items[size][10001];
        for(unsigned int i = 0; i<5; i++){
            cout<<"Index: "<<i<<"\tItem = ";
            scanf("%s", items[i]);
        }
        // Calling the function with actual parameters / arguments
        insertionSort(items, size);
        cout<<"\n";
        for(unsigned int i = 0; i<size; i++){
            printf("%s\n", items[i]);
        }
        cout<<endl;
    }

    return 0;
}
