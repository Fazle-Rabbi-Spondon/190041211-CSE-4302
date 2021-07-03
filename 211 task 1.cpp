#include <bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int a=0, i;

public:
    void setIncrementStep(int n)
    {
        i=n;
    }

    int getCount()
    {
        return a;
    }

    void increment()
    {
        a=a+i;
    }

    void resetCount()
    {
        a=0;
    }
};

int main ()
{
    Counter c;

    c.setIncrementStep(5);
    cout<<c.getCount()<<endl;
    c.increment();
    cout<<c.getCount()<<endl;
    c.resetCount();
    cout<<c.getCount()<<endl;
}
