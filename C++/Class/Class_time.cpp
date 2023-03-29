#include <iostream>
#include "Classs_time.h"
using namespace std;

int main()
{
    Classs_time P, Q, R;

    P.setTime();
    Q.setTime();

    P.display();
    Q.display();

    if (P.isMore(Q))
    {
        cout << "P is more." << endl;
        /* code */
    }
    else
    {
        cout << "P is more." << endl;
        /* code */
    }

    R = P.add(Q);
    R.display();

    return 0;
}