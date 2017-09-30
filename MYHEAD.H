/*funciton for union*/
#include<iostream.h>
#include<conio.h>
#define max 1024

void Union(int arr1[max],int arr2[max],int s1,int s2)
{
int U[max];
int i,j,k,s3;
k=0;

for(i=0,j=0;i<s1 && j<s2;)
{
if(arr1[i]>arr2[j])
{
U[k++]=arr2[j++];
}
else if(arr1[i]<arr2[j])
{
U[k++]=arr1[i++];
}
else
{
U[k++]=arr1[i++];
j++;
}

}//FOR

while(i<s1)
{
U[k++]=arr1[i++];
}

while(j<s2)
{
U[k++]=arr2[j++];
}

s3=k;//size of union
for(i=0;i<s3;i++)
cout<<U[i]<<" ";

}


void Intersection(int arr1[max],int arr2[max],int s1,int s2)
{
int I[max];
int i,j,k,s3;
k=0;

cout<<"\n Here";
for(i=0,j=0;i<s1 && j<s2;)
{
if(arr1[i]>arr2[j])
{
i++;
}
else if(arr1[i]<arr2[j])
{
j++;
}
else
{
I[k++]=arr1[i++];
j++;
}

}//FOR

s3=k;//size of interscetion
for(i=0;i<s3;i++)
cout<<I[i]<<" ";
}
