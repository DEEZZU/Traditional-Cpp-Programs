//
//  avg3Numbers.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 27/12/17.
//  Copyright © 2017 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;


//********************** APPROACH 1 *********************************

long averageAppr1(long num1, long num2, long num3)
{
    return ((num1+num2+num3)/3) ;
}


//********************** APPROACH 2 **********************************

long averageAppr2(long num1, long num2, long num3)
{
    return (((num1/3)+(num2/3)+(num3/3))+(((num1%3)+(num2%3)+(num3%3))/3));
}



int main()
{
    
    long num1,num2,num3;
    long result;
    cout << "\n Enter three numbers : " ;
    
    cout << "\n Number 1 : " ;
    cin >> num1 ;
    cout << "\n Number 2 : " ;
    cin >> num2 ;
    cout << "\n Number 3 : " ;
    cin >> num3 ;
    
    result = averageAppr1(num1, num2, num3);
    cout << "\n Average from approach 1 : " << result ;
    
    result = averageAppr2(num1, num2, num3);
    cout << "\n Average from approach 2 : " << result ;
    
    return 0;
}

