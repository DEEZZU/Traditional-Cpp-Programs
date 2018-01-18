//
//  QuickSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 02/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 100

class Quick
{
    int arr[maxSize];
    int size;
    
    public :
    
    void input();
    void qsort1( int , int );void qsort2( int , int );void qsort3( int , int );
    int partition(int,int); //taking the last element for swap
    int randomPartition(int, int); //taking the random element for swap
    int firstPartition(int,int); //taking the first element for swap and partitioning]
    void swap(int&, int&);
    void display();
};

void Quick::input()
{
    int i ; // iterator
    
    cout << "\n Enter the size of the Array : " ;
    cin >> size ;
    
    cout << "\n Enter the elements : " ;
    for ( i=0 ; i<size ; i++ )
    {
        cin >> arr[i];
    }
    
    display();
    
    cout << " \n Sorting using the last element : " << endl ;
    qsort1(0,size-1);
    
}

void Quick::qsort1(int f, int l)
{
    /* Parameters :
     f  :  first index in array
     l  :  last index in array
     
     Function :
     calling partition function on sub divisions and combining the results
    */
    
    int pPoint=0;
    
    if ( f<l )
    {
        cout << f << " " << pPoint << " " << l << endl ;
        pPoint=partition( f , l ) ;
        cout << f << " " << pPoint << " " << l << endl ;
        cout << endl ;
        qsort1( f , pPoint-1 ) ;
        qsort1( pPoint+1 , l );
    }
    
}

int Quick::partition(int fi, int la)
{
    int p = arr[la];
    cout << p << " " ;
    cout << endl ;
    
    while(fi<la)
    {
        if(p<arr[fi])
        {
            swap(arr[fi],arr[la]);
            la--;
            fi++;
        }
        else
        {
            fi++;
        }
        
    }
    
    arr[fi]=p;
    
    display();
    return (fi);
}

void Quick::display()
{
    int i ;
    
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " " ;
    }
}

void Quick::swap(int& a, int& b)
{
    int temp =a;
    a=b;
    b=temp;
}

int main()
{
    
    Quick Q;
    Q.input();
    
    Q.display();
    return 0;
}
