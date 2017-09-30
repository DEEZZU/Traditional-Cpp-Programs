/*Question : Wap using a recursive functions to print n digit number with increasing order values, consider n=2;
             12 13 14 15 16 17 18.....89.
*Input: N- the number of digits
*Output: the increasing digit value number with n digits
*Algorithm: Recursive function: 
            Base Case: if number of digits = n print the string(the number we generated)
            General Case: if number of digits is still less, 
                          generate an array arr and copy what  number u have generated so far(a parameter)
                          augment a number> number at arr[dig-1] ; at arr[dig] pos
                          simply call the function again with dig+1, and this arr and i+1 (i is the vale fixed)
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
