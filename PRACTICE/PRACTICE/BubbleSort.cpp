//
//  BubbleSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 01/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size )
{
    int i,j,temp ;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int arr[10]={32,4,32,54,2,65,3,87,56,43};
    bubbleSort(arr, 10);
    
    for(int i=0;i<10;i++)
    {
        cout <<arr[i] << " " ;
    }
    return 0;
    
}
