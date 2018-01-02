//
//  InsertionSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 01/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int i ,j,key;
    
    for(i=1;i<size;i++)
    {
        key=arr[i];
        for(j=i-1;j>=0 && key<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}

int main ()
{
    
    int arr[10]={43,21,3,1,54,32,34,31,76,23};
    insertionSort(arr, 10);
    
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " ";
    }
    return 1;
}

