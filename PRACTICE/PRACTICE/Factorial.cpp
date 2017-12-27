//
//  Factorial.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 27/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

//************************ RECURSIVE *********************

long fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}


//*********************** ITERATIVE **********************

long factIterative(int n)
{
    long fact=1;
    
    if(n==0)
        return 1;
    
    while(n>0)
    {
        fact*=n;
        n--;
    }
    return fact;
}

int main()
{
    long factRes;
    int  num;
    
    cout << "\n Enter Number For generating num: " ;
    cin >> num ;
    
    // Recursive
    factRes = fact(num);
    cout << "\n Recursive : " << factRes ;
    
    // Iterative
    factRes = factIterative(num);
    cout << "\n Iterative : " << factRes ;
    
    return 0;
}
