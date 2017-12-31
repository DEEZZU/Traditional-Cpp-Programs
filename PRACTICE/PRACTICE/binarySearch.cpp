//
//  binarySearch.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 31/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

//******************iterative***************************
int binarySearch(int arr[maxSize], int size, int element)
{
    int first, last , mid ;
    first = 0;
    last = size-1;
     while(first <= last )
     {
         mid=(first+last)/2;
         if(arr[mid]==element)
         {
             return mid;
         }
         else if (arr[mid]>element)
         {
             last =mid-1;
         }
         else
         {
             first=mid+1;
         }
             
     }
    return -1;
}

//*******************RECURSIVE*****************************
int binarySearchR(int arr[maxSize], int f, int l , int element)
{
    int mid;
    
    if( f>l )
        return -1;
    else
    {
        mid=(f+l)/2;
        if (arr[mid]==element)
            return mid;
        else if(arr[mid]<element)
            return binarySearchR(arr, mid+1, l, element);
        else
            return binarySearchR(arr, f, mid-1, element);
    }
    
}


int main()
{
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    cout << binarySearchR(arr, 0, 10, 0);
    cout << binarySearch(arr, 10, 11);
    return 1;
    
}
