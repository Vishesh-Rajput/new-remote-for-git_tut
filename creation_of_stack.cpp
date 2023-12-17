#include <iostream>
// #include <stack>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // push
    void push(int val)
    {
        if (size - top > 1)
        {

            top++;
            arr[top] = val;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    // pop
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "stack underflow" << endl;
    }
    // peek or value of top
    int peek()
    {
        return arr[top];
    }

    // check the stack
    bool is_empty()
    {
        if (top < 0)
        {

            return true;
        }
        else
            return false;
    }
};
int main()
{
    stack s(4);
    s.push(2);
    s.push(4);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();

    cout << s.peek() << endl;
    cout << s.is_empty();
    // stack<int> s;
    // // pushing data
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // // pop
    // s.pop();
    // s.pop();
    // cout << s.top() << endl;
    // return 0;
}