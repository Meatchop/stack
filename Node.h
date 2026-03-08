#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
template <typename T>
struct  Node {
        T value;
        struct Node<T> *next;
};

#endif // NODE_H_INCLUDED
