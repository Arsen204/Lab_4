#include <iostream>
#include "MyStack.h"

using namespace std;

template <class INF>
MyStack<INF>::MyStack() {
    top = nullptr;
}

template <class INF>
MyStack<INF>::~MyStack() {
    while (!empty()) {
        Node* temp = top->next;
        delete top;
        top = temp;
    }
}

template <class INF>
bool MyStack<INF>::empty() {
    return (top == nullptr);
}

template <class INF>
bool MyStack<INF>::push(INF n) {
    Node* newNode = new Node();
    newNode->d = n;
    Node* temp = top;
    top = newNode;
    top->next = temp;
    return true;
}

template <class INF>
bool MyStack<INF>::pop() {
    if (empty()) {
        return false;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
    return true;
}

template <class INF>
INF MyStack<INF>::top_inf() {
    return top->d;
}