//
//  CountingSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 25/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

class CountingSort
{
    int arr[maxSize];
    int size;
    
    public :
    
    void input();
    void countSort();
    void display();
};

void CountingSort::input()
{
    int i;
    
    cout << "\n Enter the number of elements: ";
    cin >> size;
    
    cout << "\n Elements : " ;
    
    for ( i=0 ; i<size ; i++ )
    {
        cin >> arr[i];
    }
    
    countSort();
}

void CountingSort::countSort()
{
    int C[maxSize];
    int max,min;
    max=min=arr[0];
    int i ;
    
    for ( i=1 ; i<size ; i++ )
    {
        if ( min>arr[i] )
        {
            min=arr[i];
        }
        if ( max<arr[i] )
        {
            max=arr[i];
        }
    }
    
    //normalizing for lesser storing in count array
    
    for ( i=0 ; i<size ; i++ )
    {
        C[i]=0;
    }
    
    if((max-min)<50)
    {
        for( i=0; i<size; i++ )
        {
            C[arr[i]-min]++;
        }

        int j=0;
        
        for( i=0 ; i<size ;)
        {
            if(C[j]!=0)
            {
                arr[i++]=j+min;
                C[j]--;
            }
            else
            {
                j++;
            }
        }
    }
    else
    {
        cout << "Cannot hold the Range " ;
    }
}

void CountingSort::display()
{
    int i ;
    for ( i=0 ;i < size; i++ )
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    CountingSort C;
    
    C.input();
    C.display();
    return 1;
}


