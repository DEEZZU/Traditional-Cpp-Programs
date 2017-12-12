// TestDome Quiz 
// A TrainComposition is built by attaching and detaching wagons from the left and the right sides.
// For example, if we start by attaching wagon 7 from the left followed by attaching wagon 13, again from the left,
// we get a composition of two wagons (13 and 7 from left to right). Now the first wagon that can be detached from 
// the right is 7 and the first that can be detached from the left is 13.
// Implement a TrainComposition that models this problem.

// Difficulty Level : Hard
// MaxTime : 20 min 
// Passed all Test

#include <stdexcept>
#include <iostream>
using namespace std ;

class node{

    public:
    int value;
    node* next,*prev;
    
    node(int n=0){
        value=n;
        next=NULL;
        prev=NULL;
    }
};

class TrainComposition
{
    node* first;
    node* last;
    
public:
    TrainComposition(){
        first=last=NULL;
    }
    
    void attachWagonFromLeft(int wagonId)
    {
        node* newNode= new node(wagonId);
        
        if(first==NULL){
            first=last=newNode;
        }
        else{
            first->prev=newNode;
            newNode->next=first;
            first=newNode;
        }
    }

    void attachWagonFromRight(int wagonId)
    {
        node* newNode= new node(wagonId);
        
        if(first==NULL){
            first=last=newNode;
        }
        else{
            newNode->prev=last;
            last->next=newNode;
            last=newNode;
        }
        
    }

    int detachWagonFromLeft()
    { 
        int n=-1;
        if(first==NULL)
        {
            cout << "Underflow" ;
        }
        else if(first->next==NULL)
        {
            n=first->value;
            delete first;
            first=last=NULL;
        }
        else{
            n=first->value;
            node* temp;
            temp=first;
            first=first->next;
            first->prev=NULL;
            delete temp;
        }
        return n;
    }

    int detachWagonFromRight()
    {
        int n;
        n=-1;
        if(first==NULL)
        {
            cout << "Underflow" ;
        }
        else if(first->next==NULL)
        {
            n=first->value;
            delete first;
            first=last=NULL;
        }
        else{
            n=last->value;
            node* temp=last;
            last=last->prev;
            last->next=NULL;
            delete temp;
        }
        return n;
    }
};

#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    cout << tree.detachWagonFromRight() << "\n"; // 7 
    cout << tree.detachWagonFromLeft(); // 13
}
#endif
