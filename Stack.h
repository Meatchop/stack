#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "Node.h"
#include <cstddef>
template <typename T>
class Stack {
private:
    size_t capacity;
    size_t size;
    struct Node<T> *head;
public:
    Stack(size_t c);
    void pop();
    struct Node<T> *peek();
    void push(T t);
};

#endif
