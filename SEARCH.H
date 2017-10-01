#include "header.h"

int binarysearch(int arr[max],int s1,int element)
{
int mid,first ,last;
first=0;
last=s1;

while(first<=last)
{
mid=(first+last)/2;
if(element==arr[mid])
 return 1;
else if(element>arr[mid])
{  first=mid+1;    }
else
{  last=mid-1;	   }

}
return 0;

}


int rec_bin(int arr[max],int f,int l,int element)
{

int mid=(f+l)/2;
if(element==arr[mid])
	return 1;
else if(f>l)
 	return 0;
else if(element>arr[mid])
	return rec_bin(arr,mid+1,l,element);
else
	return rec_bin(arr,f,mid-1,element);

}