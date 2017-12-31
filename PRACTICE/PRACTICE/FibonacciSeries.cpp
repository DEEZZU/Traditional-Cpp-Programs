//
//  FibonacciSeries.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 27/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 100

int mem[maxSize];

// Assuming the series to be : 0 1 1 2 3 5 8 13 22 ...

// ************************** RECURSIVE NON MEMOIZED ***********************
int fib(int n)
{
    int fibN;
    if(n==1 || n==2)
    {
        cout << "here"  << endl ;
        fibN = (n-1);
        
    }
    else
    {
        cout << "here"  << endl ;
        fibN = (fib(n-1)+fib(n-2));
    }
//    cout << fibN;
    return fibN;

}


//*************************** ITERATIVE ************************************
void fibI(int num)
{
    int n1, n2, n;
    int itr=1;
    
    n1 = n = 1 ;
    n2 = -1 ;
//    cout << "Here";
    while(itr<=num)
    {
//        cout << "1" << endl;
        n1=n2;
        n2=n;
        n=n1+n2;
        cout << n << " ";
        itr++;
   }
    cout << endl;
}

//************************ RECURSIVE MEMOIZED *********************************
int fibRM(int n)
{
    int fibN;
    if(n==1 || n==2)
    {
       cout << "here"  << endl ;
       mem[n]  = fibN = (n-1);
       
    }
    else if(mem[n-1]!=0)
    {
        cout << "here"  << endl ;
        fibN = mem[n-1]+mem[n-2];
        
    }
    else
    {
        cout << "here"  << endl ;
        mem[n] = (fib(n-1)+fib(n-2));
        fibN=mem[n];
        
    }
    
//    cout << fibN;
    return fibN;
    
}

int main()
{
    cout << fib(5) << endl ;
    cout  << fibRM(5) << endl ;
    cout  << fibRM(5) << endl;
    fibI(5);
    
    return 0;
    
}
