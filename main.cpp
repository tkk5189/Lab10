//
// Created by tkk5189 on 3/19/2019.
//

#include <iostream>
#include "Node.h"
#include "Linkedlist.h"

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    Node<double> *n1 = new Node<double>(1.5, nullptr);
    Node<double> *n2 = new Node<double>(2.5, nullptr);
    n1 -> setNext( n2);

    Linkedlist<int> Linkedlist;
    Linkedlist.append(1);
    Linkedlist.append(2);
    Linkedlist.append(3);
    Linkedlist.append(4);
    Linkedlist.append(5);

    return 0;
}