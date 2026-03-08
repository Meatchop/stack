#include "Stack.h"
template <typename T>
Stack<T>::Stack(size_t c): capacity(c), size(0), head(nullptr)
{
};
struct *Node<T> Stack<T>::peek(){
    return this->head;
};
void Stack<T>::pop(){
    if(this->size == 0) return;
    size--;
    delete this->head;
    this->head = peek()->next;
};
void Stack<T>::push(struct Node<T> &t)
{
    if(this.capacity==this->size)
    {
        return;
    }
    this->size++;
    this->head = t;
};
