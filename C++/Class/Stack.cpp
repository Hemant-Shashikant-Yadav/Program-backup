#include <iostream>
using namespace std;

#define M 5

class Stack
{
    int top;
    int arr[M];

public:
    Stack() { top = -1; }
    ~Stack() {}
    int isFull() { return top == M - 1; };
    int isEmpty() { return top == -1; }
    void push(int);
    void pop();
    void display();
    void menu();
};

void Stack::push(int d)
{
    if (isFull())
    {
        cout << "Overflow." << endl;
        /* code */
    }
    else
    {
        top++;
        arr[top] = d;
    }
}

void Stack::pop()
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

void Stack::display()
{
    if (isEmpty())
    {
        cout << "Empty stack" << endl;
        /* code */
    }
    else
    {
        cout << "Data = ";
        for (int i = top; i > -1; i--)
        {
            cout << arr[i] << " ";
            /* code */
        }
    }
}

void Stack::menu()
{
    int opt, d;

    while (1)
    {
        cout << "\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption = ";
        cin >> opt;

        if (opt == 4)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            cout << "Enter data = ";
            cin >> d;
            push(d);
            /* code */
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
    Stack P;
    P.menu();

    return 0;
}