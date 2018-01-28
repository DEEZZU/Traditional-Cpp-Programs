//
//  RadixSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 25/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

class Radix
{
    int arr[maxSize];
    int size;
    
    public :
    
    void input();
    void radixSort();
    void display();
};

void Radix::input()
{
    int i ;
    
    cout << "\n Enter the number of values in array :";
    cin >> size;
    
    cout << "\n Enter the elements : " ;
    for ( i=0 ; i<size ; i++ )
    {
        cin >> arr[i] ;
    }
    
    radixSort();
}


