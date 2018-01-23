//
//  QuickSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 02/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define maxSize 100

class Quick
{
    int arr[maxSize];
    int size;
    
    public :
    
    void input();
    void qsort1( int , int );               // using last element as pivot
    void qsort2( int , int );               // using first element as pivot
    void qsort3( int , int );               // using middle element as pivot
    void qsort4( int , int );               // using random element as pivot
    int partition( int , int );             // taking the last element for swap
    int randomPartition( int , int );       // taking the random element for swap
    int firstPartition( int , int );        // taking the first element for swap
    int middlePartition( int , int );       // taking the middle element for swap
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
    qsort3(0,size-1);
    
}

//*************************************************** LAST ELEMENT *****************************************************

void Quick::qsort1(int f, int l)
{
    /* Parameters :
     f  :  first index in array
     l  :  last index in array
     
     Function :
     calling partition function on sub divisions and combining the results
    */
    
    int pPoint;
    
    if ( f<l )
    {
        
        pPoint=partition( f , l ) ;

        qsort1( f , pPoint-1 ) ;
        qsort1( pPoint+1 , l );
    }
    
}

int Quick::partition(int fi, int la)
{
    int p = arr[la];
    int i = fi-1;
    int j = fi ;
    int temp;
    
    while( j<la )
    {
        if ( arr[j]<= p )
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }

    temp=arr[i+1];
    arr[i+1]=arr[la];
    arr[la]=temp;
    
    return (i+1);
}

//*************************************************** RANDOM ELEMENT *****************************************************

void Quick::qsort2(int f, int l)
{
    /* Parameters :
     f  :  first index in array
     l  :  last index in array
     
     Function :
     calling partition function on sub divisions and combining the results
     */
    
    int pPoint;
    
    if ( f<l )
    {
        
        pPoint=randomPartition( f , l ) ;
        
        qsort1( f , pPoint-1 ) ;
        qsort1( pPoint+1 , l );
    }
    
}

int Quick::randomPartition(int fi, int la)
{
    int temp;
    int index = rand() % la + fi ;
    
    temp = arr[index] ;
    arr[index] = arr[la];
    arr[la] = temp;
    
    int p = arr[la];
    int i = fi-1;
    int j = fi ;
    
    
    while( j<la )
    {
        if ( arr[j]<= p )
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    
    temp=arr[i+1];
    arr[i+1]=arr[la];
    arr[la]=temp;
    
    return (i+1);
}

//*************************************************** FIRST ELEMENT *****************************************************

void Quick::qsort3(int f, int l)
{
    /* Parameters :
     f  :  first index in array
     l  :  last index in array
     
     Function :
     calling partition function on sub divisions and combining the results
     */
    
    int pPoint;
    
    if ( f<l )
    {
        
        pPoint=firstPartition( f , l ) ;
        
        qsort1( f , pPoint-1 ) ;
        qsort1( pPoint+1 , l );
    }
    
}

int Quick::firstPartition(int fi, int la)
{
    int temp;
    int index = fi ;
    
    temp = arr[index] ;
    arr[index] = arr[la];
    arr[la] = temp;
    
    int p = arr[la];
    int i = fi-1;
    int j = fi ;
    
    
    while( j<la )
    {
        if ( arr[j]<= p )
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    
    temp=arr[i+1];
    arr[i+1]=arr[la];
    arr[la]=temp;
    
    return (i+1);
}

//*************************************************** MEDIAN ELEMENT *****************************************************

void Quick::qsort4(int f, int l)
{
    /* Parameters :
     f  :  first index in array
     l  :  last index in array
     
     Function :
     calling partition function on sub divisions and combining the results
     */
    
    int pPoint;
    
    if ( f<l )
    {
        
        pPoint=partition( f , l ) ;
        
        qsort1( f , pPoint-1 ) ;
        qsort1( pPoint+1 , l );
    }
    
}

int Quick::middlePartition(int fi, int la)
{
    int temp;
    int index = (fi+la)/2 ;
    
    temp = arr[index] ;
    arr[index] = arr[la];
    arr[la] = temp;
    
    
    int p = arr[la];
    int i = fi-1;
    int j = fi ;
    
    while( j<la )
    {
        if ( arr[j]<= p )
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    
    temp=arr[i+1];
    arr[i+1]=arr[la];
    arr[la]=temp;
    
    return (i+1);
}

void Quick::display()
{
    int i ;
    
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " " ;
    }
}


int main()
{
    
    Quick Q;
    Q.input();
    
    Q.display();
    return 0;
}
