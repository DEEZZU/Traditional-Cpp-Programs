//
//  primeSumApp1.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 08/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//
// immediate primes of a number are added and the sum is generated
// consider an example : if p = 3 is enetered then 2 and 5 surrounds 3 , therefore the sum = 2+5 = 7 is generated 

#include <stdio.h>

int ifPrime(int num)
{
    int n;
    for(n=2;n<=num/2;n++)
    {
        if(num%n==0)
            return 0;
    }
    return 1;
}

int primeSum(int p)
{
    int p1, p2;
    if(p<3)
        return 0;
    if(p==3)
    {
        return 7;
    }
    else
    {
        p1=p-2;
        p2=p+2;
        
        while(!ifPrime(p1))
        {
            p1-=2;
        }
        while(!ifPrime(p2))
        {
            p2+=2;
        }
        return p1+p2;
    }
}

int main()
{
    // Declare the variable
    int testCases;
    int  i;
    
    // Read the variable from STDIN
    scanf("%d", &testCases);
    int *primeNum = (int *) malloc(testCases * sizeof(int));
    for(i=0;i<testCases;i++)
        scanf("%d", &primeNum[i]);
    
    
    // Output the variable to STDOUT
    // printf("The number of test cases : %d", testCases);
    for(i=0;i<testCases;i++)
        printf("%d\n",primeSum(primeNum[i]));
    
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted
    return 0;
}
