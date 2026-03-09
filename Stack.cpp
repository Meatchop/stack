#include "Stack.h"
template <typename T>
Stack<T>::Stack(size_t c): capacity(c), size(0), head(nullptr)
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
    if(capacity==size)
    {
        return;
    }
    Node<T> *temp = new Node<T>;
    temp->value = t;
    temp->next = head;
    size++;
    head = t;
}
