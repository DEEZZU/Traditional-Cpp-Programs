#include "header.h"
#include "search.h"

void intersection(int a1[max],int a2[max],int s1, int s2)
{

int I[max];
int i,k;
k=0;
//complexity: max(O(mlgn),O(nlgm))

if(s1<s2)
{

for(i=0;i<s1;i++)
{
cout<<"\n here";
if(binarysearch(a2,s2,a1[i]))
	I[k++]=a1[i];
}

}
else
{

for(i=0;i<s2;i++)
{
if(binarysearch(a1,s1,a2[i]))
	I[k++]=a2[i];
}

}

for(i=0;i<k;i++)
cout<<I[i]<<" ";

}




