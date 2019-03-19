//
// Created by tkk5189 on 3/19/2019.
//

#ifndef CLION_LINKEDlIST_H
#define CLION_LINKEDlIST_H

#include <cstdlib>
#include "Node.h"

  template < class T>
class Linkedlist
{
private:
    Node <T> *head;

public:
    Linkedlist()
    {
        head = nullptr;
    }

    Node<T>* getheadNode();
    void append(T d);
    void print() ;
};



template < class T>
 Node<T> * Linkedlist<T>::getheadNode()
{
    return head;
}

template < class T>
void Linkedlist<T>::append(T d) {
    Node<T> *newNode;
    Node<T> *nodePtr;
    newNode = new ListNode;
    newNode->data = n;
    newNode->next = nullptr;

    if (!head) {
        head = newNode;
    } else {
        nodePtr = head;

        while (nodePtr->getNext()) {
            nodePtr = nodePtr->getNext();
        }

        nodePtr->setNext() = newNode;
        return;
    }
}

template <class T>
void Linkedlist<T> :: print()
{
    Node<T>* node = head;

    while( node->getNext() )
    {
        cout << node ->getData() << "->";
        node = node->getNext();
    }

    cout << node ->getData();
}


#endif //CLION_LINKEDLIST_H
