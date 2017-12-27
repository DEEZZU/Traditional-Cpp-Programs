//
//  SwapStrategy.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 27/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

//********************* APPROACH 1 *********************
// using a temporary variables

void swapAppr1(long& num1, long& num2)
{
    long temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void swapAppr1Pointer(long* num1,long* num2)
{
    long temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

//******************** APPROACH 2 **********************
//using addition

void swapAppr2(long& num1,long& num2)
{
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
}

void swapAppr2Pointer(long* num1,long* num2)
{
    *num1=*num1+*num2;
    *num2=*num1-*num2;
    *num1=*num1-*num2;
}

//********************* APPROACH 3 *********************
//using xor

void swapAppr3(long& num1, long& num2)
{
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
}

void swapAppr3Pointer(long* num1,long* num2)
{
    *num1=*num1^*num2;
    *num2=*num1^*num2;
    *num1=*num1^*num2;
}

int main()
{
    long num1, num2;
    
    cout << "\n Enter two numbers to be swapped :" ;
    cout << "\n Number 1:";
    cin >> num1;
    cout << "\n Number 2:";
    cin >> num2;
    
    
    cout << "\n ORIGINAL NUMBER : " << num1 << " " << num2 ;
    // approach 1
    //using ref
    swapAppr1(num1, num2);
    cout << "\n APPROACH 1 : REFERENCE : " << num1 << " " << num2 ;
    swapAppr1Pointer(&num1, &num2);
    cout << "\n APPROACH 1 : POINTER : " << num1 << " " << num2 ;
    
    swapAppr2(num1, num2);
    cout << "\n APPROACH 2 : REFERENCE : " << num1 << " " << num2 ;
    swapAppr2Pointer(&num1, &num2);
    cout << "\n APPROACH 2 : POINTER : " << num1 << " " << num2 ;
    
    swapAppr3(num1, num2);
    cout << "\n APPROACH 3 : REFERENCE : " << num1 << " " << num2 ;
    swapAppr3Pointer(&num1, &num2);
    cout << "\n APPROACH 3 : POINTER : " << num1 << " " << num2 ;
    
    return 0;
    
    
}
