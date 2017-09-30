//SIEVE OF ERANTHOSES
//generating prime numbers upto n
#include<iostream.h>
#include<conio.h>
#define max 100
int prime[max];
void sieve(int n);
void main()
{
clrscr();
int n;
cout<<"\n..... Programing for generating prime numbers(Sieve of Erathonese).....";
cout<<"\n Enter N:";
//N: Max limit upto which numbers are to be generated
cin>>n;
sieve(n);
getch();
}
void sieve(int n)
{
prime[0]=prime[1]=1;
for(int i=2;i<=n;i++)
{
 if(prime[i]!=1)
 //query : it doesmt work on 0 prime[i]!=0 ???
    prime[i]=0;

    for(int p=i*2;p<=n;p+=i)
     prime[p]=1;
}

for(i=0;i<=n;i++)
if(!prime[i])
cout<<" "<<i;

}

