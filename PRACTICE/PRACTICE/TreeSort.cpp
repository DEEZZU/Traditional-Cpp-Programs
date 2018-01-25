//
//  TreeSort.cpp
//  PRACTICE
//
//  Created by DEEPTI SHARMA on 23/01/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//
#include <iostream>
using namespace std;
#define maxSize 50

class node
{
    int key ;
    node* left ;
    node* right ;
    
    public :
    
    node(int keyValue)
    {
        key = keyValue ;
        left = right = NULL ;
    }
    
    void setLeft(node* l)
    {
        left = l ;
    }
    
    void setRight(node* r)
    {
        right = r ;
    }
    
    int getKeyValue()
    {
        return key ;
    }
    
    node* getLeft()
    {
        return left ;
    }
    
    node* getRight()
    {
        return right ;
    }
};

class BST
{
    
    node* root ;
    int arr[maxSize];
    int size;
    
    public :
    
    BST()
    {
        root = NULL ;
    }
    
    void input();
    void insertIntoTree(int nodeValue);
    void treeSort();
    void inOrderTraversal(node*);
    void display();
    void inorder(node*);
};

void BST::input()
{
    int i;
    
    cout << "\n Enter the number of elements : " ;
    cin >> size;
    
    cout << "\n Enter the elements : " ;
    for ( i=0 ; i < size ; i++ )
    {
        cin >> arr[i];
    }
    
    display();
    
    cout  << endl ;
    
    for( i=0 ; i < size ; i++ )
    {
       // cout << " here j " << endl ;
        insertIntoTree(arr[i]);
    }
    
//    node * temp=root;
//    inorder(temp);
//
//    cout << " here " ;
}

void BST::inorder(node* n)
{
    if(n!=NULL)
    {
        inorder(n->getLeft());
        cout << n->getKeyValue() << " " ;
        inorder(n->getRight());
    }
}

void BST::insertIntoTree(int nodeValue)
{
    
    node* n = new node( nodeValue );
    node* temp ;
    node* temp2 ;
    node* par ;
    int value;
    
    
    
    if(root == NULL)
    {
        root=n;
    }
    else
    {
        temp = root;
        while ( temp!=NULL )
        {
            //    cout <<  " here n " ;
            par = temp ;
        
            value = temp->getKeyValue() ;
            
          //  cout << value << " " ;
            if ( value >= nodeValue )
            {
                temp2 = temp->getLeft();
            }
            else
            {
                temp2 = temp->getRight();
            }
            
            temp=temp2;
        }
     //   cout << endl ;
    
        if( par->getKeyValue() >= nodeValue )
        {
          //  cout << par->getKeyValue() ;
            par->setLeft(n);
        }
        else
        {
            par->setRight(n);
        }
    }
    
}

void BST::treeSort()
{
    inOrderTraversal(root);
    cout << "\n Sorted Order of elements : ";
    display();
}

void BST::inOrderTraversal( node *n )
{
    static int i=0;
    if(n!=NULL)
    {
        inOrderTraversal( n->getLeft() ) ;
        arr[i++] = n->getKeyValue();
        inOrderTraversal( n->getRight());
    }
}

void BST::display()
{
    int i ;
    for ( i=0 ;i < size; i++ )
    {
        cout << arr[i] ;
    }
}

int main()
{
    BST B;
    
    B.input();
    B.treeSort();
    return 1;
}

