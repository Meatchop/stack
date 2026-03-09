#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;

int main()
{
    int n1 = 1;
    int n2 = 2;
    Stack<int> s;
    s.push(n1);
    s.push(n2);
    s.push(3);
    //test
    s.pop();
    cout << s.peek()->value << endl;
    cout << s.peek()->next->value << endl;

    return 0;
}
