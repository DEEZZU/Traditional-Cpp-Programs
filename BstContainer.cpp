//BST Container function implementation
#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const
    {
        return value;
    }

    Node* getLeft() const
    {
        return left;
    }

    Node* getRight() const
    {
        return right;
    }

private:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(Node& root, int value)
    {
        
        Node* temp =&root;
        
        if(temp==NULL){
            return 0;
        }
        else{
            while(temp!=NULL){
                if(temp->getValue()==value){
                    return 1;
                }
                else if(temp->getValue()>value){
                    temp=temp->getLeft();
                }
                else{
                    temp=temp->getRight();
                }
            }
        }
        return 0;
    }
};
