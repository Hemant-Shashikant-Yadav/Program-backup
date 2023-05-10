#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T var[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    ~Stack() {}
    isFull()
    {
        return (top == 4);
    }
    isEmpty()
    {
        return (top == -1);
    }
    void push(T val)
    {
        if (isFull())
        {
            cout << "Overflow." << endl;
            /* code */
        }
        else
        {
            top++;
            var[top] = val;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Underflow" << endl;
            /* code */
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Empty stack" << endl;
            /* code */
        }
        else
        {
            cout << "Data =";
            for (int i = top; i >= 0; i--)
            {
                cout << "  " << var[i];
            }
        }
    }
    void menu();
};

template <class T>
void Stack<T>::menu()
{
    int opt;
    T data;
    while (1)
    {
        cout << "\nMenu\n1.Push\n2.POP\n3.Display\n4.Exit\nOption = ";
        cin >> opt;
        if (opt == 4)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            cout << "Enter data = ";
            cin >> data;

            push(data);

            break;
        case 2:
            pop();

            break;
        case 3:
            display();

            break;

        default:
            break;
        }
    }
}

int main()
{
    Stack<int> A;
    A.menu();
    return 0;
}