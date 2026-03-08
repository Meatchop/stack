#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "Node.h"
#include <cstddef>
template <typename T>
class Stack {
private:
    size_t capacity;
    size_t size;
    struct Node *head;
public:
    Stack(size_t c);
    void pop();
    struct Node *peek();
    struct Node top();
    void push(T elem);
}

#endif
