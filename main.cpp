#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;

int main()
{
    int n1 = 1;
    int n2 = 2;
    Stack<int> s(10);
    s.push(n1);
    s.push(n2);
    //test
    s.pop();
    cout << s.peek()->value << endl;
    return 0;
}
