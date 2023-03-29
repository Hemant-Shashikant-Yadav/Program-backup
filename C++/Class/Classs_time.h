#include<iostream>
using namespace std;



class Classs_time
{
private:
    int hr, min, sec;

public:
    Classs_time(int hr = 0, int min = 0, int sec = 0)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    Classs_time(long int t)
    {
        hr = t / 3600;
        t = t % 3600;
        min = t / 60;
        sec = t % 60;
    }
    Classs_time(Classs_time &a)
    {
        hr = a.hr;
        min = a.min;
        sec = a.sec;
    }

    long int toSeconds()
    {
        return ((hr * 3600l) + (min * 60) + (sec));
    }

    void setTime()
    {
        cout << "In hrs";
        cin >> hr;
        cout << "In mins";
        cin >> min;
        cout << "In secs";
        cin >> sec;
    }
    void setTime(int hr = 0, int min = 0, int sec = 0)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    void setTime(long int t)
    {
        hr = t / 3600;
        t = t % 3600;
        min = t / 60;
        sec = t % 60;
    }

    int getHr()
    {
        return hr;
    }
    int getMin()
    {
        return min;
    }
    int getSec()
    {
        return sec;
    }
    void display()
    {
        cout << "Time = " << endl;
        cout << "Hrs = " << hr << endl;
        cout << "Mins = " << min << endl;
        cout << "Secs = " << sec << endl;
    }
    void isMore(Classs_time &t)
    {
        long int a = toSeconds();
        long int b = t.toSeconds();

        return a > b;
    }
    void isLess(Classs_time &t)
    {
        long int a = toSeconds();
        long int b = t.toSeconds();

        return a < b;
    }

    Classs_time add(Classs_time &t)
    {
        long int a = toSeconds();
        long int b = t.toSeconds();
        Classs_time K(a + b);
        return K;
    }
    Classs_time sub(Classs_time &t)
    {
        long int a = toSeconds();
        long int b = t.toSeconds();
        Classs_time K(labs(a-b));
        return K;
    }

    ~Classs_time()
    {
    }
};
