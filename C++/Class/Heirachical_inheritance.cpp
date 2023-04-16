#include <iostream>
using namespace std;

#define M 5

class Array
{
protected:
    int x[M];

public:
    Array()
    {
        for (int i = 0; i < M; i++)
        {
            x[i] = 0;
        }
    }
    ~Array(){}

    void set(int pos, int d)
    {
        x[pos] = d;
    }
    int get(int pos)
    {
        return x[pos];
    }
};

class Stack : public Array
{

protected:
    int top;

public:
    Stack() : Array()
    {
        top = -1;
    }
    ~Stack() {}
    void push(int d)
    {
        if (top == (M - 1))
        {
            cout << "\nOverflow";
            return;
        }
        set(++top, d);
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "\nUnerflow";
            return;
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "\nEmpty stack";
        }
        else
        {
            cout << "\nData = ";
            for (int i = 0; i <= top; i++)
            {
                cout << " " << x[i];
                /* code */
            }
        }
    }
    void menu()
    {
        int opt, d;
        while (1)
        {
            cout << "\nStack\n1.Push\n2.Pop\n3.Display\n4.Exit\nChoose = ";
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
                /* code */
                break;
            case 3:
                display();
                /* code */
                break;

            default:
                break;
            }
        }
    }
};

class Queue : public Array
{
protected:
    int front, rear;

public:
    Queue() : Array()
    {
        front = 0;
        rear = -1;
    }
    void insert(int d)
    {
        if (rear == (M - 1))
        {
            cout << "\nOverflow";
            /* code */
        }
        else
        {
            set(++rear, d);
        }
    }
    void remove()
    {
        if (rear < front)
        {
            cout << "\nEmpty queue";
        }
        else
        {
            front++;
        }
    }
    void display()

    {
        if (rear < front)
        {
            cout << "\nEmpty queue";
        }
        else
        {
            cout << "Data = ";
            for (int i = front; i <= rear; i++)
            {
                cout << " " << x[i];
            }
        }
    }

    void menu()
    {
        int opt, d;
        while (1)
        {
            cout << "\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nChoose = ";
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
                insert(d);
                /* code */
                break;
            case 2:
                remove();
                /* code */
                break;
            case 3:
                display();
                /* code */
                break;

            default:
                break;
            }
        }
    }
};
int main()
{
    // Stack S;
    // S.menu();

    Queue Q;
    Q.menu();

    return 0;
}