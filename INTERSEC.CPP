//intersection using binary search
#include "intersect.h"

void main()
{
clrscr();
int a1[max],n1,i;
int a2[max],n2;

cout<<"\n Enter the number of elements in set 1:";
cin>>n1;

cout<<"\n Enter Elements:";

for(i=0;i<n1;i++)
{
cin>>a1[i];
}


cout<<"\n Enter the number of elements in set 2:";
cin>>n2;

cout<<"\n Enter Elements:";

for(i=0;i<n2;i++)
{
cin>>a2[i];
}

intersection(a1,a2,n1,n2);
getch();
}

