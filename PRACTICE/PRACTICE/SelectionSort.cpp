//
//  SelectionSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 01/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

void selectSort(int arr[maxSize], int size)
{
    int i,j,temp,value;
    
    for(i=0;i<size;i++)
    {
        temp=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[temp])
            {
                temp=j;
            }
        }
        value=arr[temp];
        arr[temp]=arr[i];
        arr[i]=value;
    }
}

int main()
{
    int arr[10]={32,4,32,54,2,65,3,87,56,43};
    selectSort(arr, 10);
    
    for(int i=0;i<10;i++)
    {
        cout <<arr[i] << " " ;
    }
    return 0;
    
}
