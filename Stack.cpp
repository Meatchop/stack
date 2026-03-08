#include "Stack.h"
Stack::Stack(size_t c): capacity(c), size(0)
{
}
struct Node *peek(){
    return this->head;
}
void pop(){
    if(thi.size == 0) return;
    size--;
    this.head = peek()->next;
}
struct Node top()
{
    Node t = *peek();
    return t;
}
void push(T elem)
{
    if(this.capacity==this.size)
    {
        return;
    }
    this.size++;
    Node t;
    t.next = &this.head;
    t.value = elem;
    this.head = &t
}
