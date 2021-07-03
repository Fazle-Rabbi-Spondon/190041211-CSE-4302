#include <bits/stdc++.h>
using namespace std;

class Rational_Number
{
private:
    int p, q;

public:

    void assign(int a, int b)
    {
        p=a;
        if (b==0) cout<<"Error";
        else q=b;
    }

    double convert()
    {
        return (double(p))/(double(q));
    }

    void invert()
    {
        int a;
        a=p;
        p=q;
        q=a;
    }

    void print()
    {
        cout<<p<<"/"<<q<<endl;
    }

};

int main ()
{
    Rational_Number r;
    r.assign(5,6);r.print();
    cout<<r.convert()<<endl;
    r.invert();
    r.print();
}
