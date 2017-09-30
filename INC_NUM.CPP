//recursive functions to print n digit number   with increasing order
/* consider n=2;
12 13 14 15 16 17 18.....
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void rec_incnum(int dig,int i,char a[],int s);

void main()
{
clrscr();
int n;
char a[10];
cout<<"\n Enter the number of digits:";
cin>>n;
rec_incnum(0,0,a,n);
getch();
}

void rec_incnum(int dig,int i, char a[10],int s)
{

if(dig==s)
{
a[s]='\0';
cout<<a<<" ";
}
else
{
for(int j=i;j<=9;j++)
{
char arr[10];
strcpy(arr,a);
arr[dig]=(j+48);
rec_incnum(dig+1,j+1,arr,s);
}//for

}//else
}