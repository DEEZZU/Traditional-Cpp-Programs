//
//  LinearSearch.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 31/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;


//************ ITERATIVE ***********************
int linearSearch(int arr[],int size,int element)
{

    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
            return (i+1) ;
    }
    return -1;
}

//************RECURSIVE*************************
int linearSearchR(int arr[],int size,int element,int i)
{
    
    if ( i==size )
    {
        return -1;
    }
    else if(arr[i]==element)
    {
        return (i+1) ;
    }
    else
        return linearSearchR(arr, size, element,i+1);
}


int main()
{
    
    int arr[10]={23,12,43,21,45,76,87,32,2,3};
    
    cout << linearSearchR(arr, 10, 33, 0);
    cout << linearSearch(arr, 10, 33);
    
    return 1;
}

