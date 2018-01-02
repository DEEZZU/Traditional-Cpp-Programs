//
//  HeapSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 01/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;
#define maxSize 50

class binHeap
{

    int arr[maxSize];
    int size;
    
    public :
    
    void input ();
    void heapify(int);
    void heapSort();
    void display();
};

void binHeap::heapify(int i )
{
    int l,r;
    int largest=i;
    int temp;
    
    l=2*i+1;
    r=2*i+2;
    
    if(l<size && arr[largest]<arr[l])
        largest=l ;
    
    if(r<size && arr[largest]<arr[r])
        largest=r;
    
    if(largest!=i)
    {
        temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        heapify(largest);
    }
}

void binHeap::heapSort()
{
    int i;
    int temp;
    
    //building heap
    for(i=size/2-1;i>=0;i--)
    {
        heapify(i);
        display();
        cout << endl;
    }
    int sz=size;

     for(i=size-1;i>=0;i--)
    {
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        size--;
        heapify(0);
        
        cout << endl;
        display();
//        cout << endl;
    }
    size=sz;
}


void binHeap::display()
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

void binHeap::input()
{
    int i;
    
    cout <<"\n Enter size: ";
    cin >> size;
    
    for(i=0;i<size;i++)
    {
        cin>> arr[i];
    }
}

int main()
{
    binHeap H;
    H.input();
    H.display();
    H.heapSort();
    H.display();
    return 0;
}
