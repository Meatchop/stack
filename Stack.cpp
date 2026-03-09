#include "Stack.h"
template <typename T>
Stack<T>::Stack(): size(0), head(nullptr)
{
}
template <typename T>
struct Node<T>* Stack<T>::peek(){
    return head;
}
template <typename T>
void Stack<T>::pop(){
    if(size == 0) return;
    size--;
    delete head;
    head = peek()->next;
}
template <typename T>
void Stack<T>::push(T t)
{
    Node<T> *temp = new Node<T>;
    temp->value = t;
    temp->next = head;
    size++;
    head = t;
}

template class Stack<int>;
