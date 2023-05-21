
#include <stdexcept>
#include <string>
#include <iostream>

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

public:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value)
    {
        if(&root== NULL){
           return false;}
       if(root.value== value){
           return true;
       }
       else if(root.value> value){
           contains(*root.left, value);
       }
       else {
           contains(*root.right, value);
       }
       
    }
};

#ifndef RunTests
int main()
{
    //Rama izquierda 
    Node n1(4, NULL, NULL);
    Node n2(7, NULL, NULL);
    Node n3(6, &n1 , &n2);
    Node n4(1, NULL, NULL);
    Node n5(3, &n4 , &n3);
    //Rama derecha
    Node n8(13, NULL, NULL);
    Node n7(14, &n8, NULL);
    Node n6(10, NULL, &n7);
    //Raiz
    Node n9(8, &n5, &n6);
    std::cout<<BinarySearchTree::contains(n9, 8);
}
#endif