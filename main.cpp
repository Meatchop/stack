#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;

int main()
{
    struct Node<int> n1;
    n1.value = 1;
    struct Node<int> n2;
    n2.value = 2;
    Stack<int> s = Stack(10);
    s.push(n1);
    s.push(n2);
    //test
    s.pop();
    cout << s.peek()->value << endl;
    return 0;
}
