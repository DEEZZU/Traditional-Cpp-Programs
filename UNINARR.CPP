/*
union intersection of sorted array using method 1
complexity =O(m+n)
*/
#include "myhead.h"

void main()
{
clrscr();
int A1[max],A2[max];
int s1,s2;
cout<<"\n Enter number of elements for array 1 :";
cin>>s1;

cout<<"\n Enter "<<s1<<" elements:";
for(int i=0;i<s1;i++)
cin>>A1[i];

cout<<"\n Enter number of elements for array 2 :";
cin>>s2;

cout<<"\n Enter "<<s2<<" elements:";
for(i=0;i<s2;i++)
cin>>A2[i];
cout<<"\n Union:";
Union(A1,A2,s1,s2);

cout<<"\n Intersection:";
Intersection(A1,A2,s1,s2);
getch();
}
