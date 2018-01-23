//
//  MergeSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 02/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

class Merge
{
  
    int arr[maxSize];
    int size;
    
public:
    
    void input();
    void mergeSort(int,int);
    void merge(int,int,int);
    void display();
};

void Merge::input()
{
    int i ;
    cout <<"\n Enter the size :";
    cin >> size;
    
    cout <<" \n Enter elements :";
    
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    mergeSort(0, size-1);
    
}

void Merge::mergeSort(int f, int l)
{
    int m;
    
    if(f<l)
    {
        m =(f+l)/2;
       // cout << "f" << f << " m" << m << " l" << l << endl;
        mergeSort(f, m);
        mergeSort(m+1, l);
        merge(f, m, l);
    }
}

void Merge::merge(int f, int m, int l)
{
    int left[maxSize];
    int righ[maxSize];
    int res[maxSize];
    int n1;
    int n2;
    
   
    n1=m-f+1;
    n2=l-m;
    cout << "n1:" << n1 << " n2:" << n2;
    int i,j,k;
    
    k=f;
    for(i=0;i<n1;i++)
    {
        left[i]=arr[k];
        k++;
        cout << left[i] << " ";
    }
    cout << endl ;
    
    k=m+1;
    for(i=0;i<n2;i++)
    {
        righ[i]=arr[k];
        k++;
        cout << righ[i] << " " ;
    }
    cout << endl ;
    
    k=0;
    i=0;
    j=0;
    
    for(;i<n1&& j<n2;k++)
    {
        if(left[i]<righ[j])
        {
            res[k]=left[i];
            i++;
        }
        else
        {
            res[k]=righ[j];
            j++;
        }
    }
    
    if(i<n1)
    {
        while(i<n1)
        {
            res[k++]=left[i++];
        }
    }
    else
    {
        while(j<n2)
        {
            res[k++]=righ[j++];
        }
    }
    
    for(i=f;i<=l;i++)
    {
        arr[i]=res[i-f];
    }
    
    cout << endl;
    
    display();
    cout << endl;
    
}


void Merge::display()
{
    int i ;
    
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    
    Merge M;
    M.input();
    
    M.display();
    return 0;
}
