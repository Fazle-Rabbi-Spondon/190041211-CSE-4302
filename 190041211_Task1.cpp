#include <iostream>
using namespace std;

class Calculator
{
private:
    int a;

public :
    Calculator() : a(0)
    {}
    Calculator(int n):a(n)
    {}

    void getValue()
    {
        int n;
        cout<<"Enter value: ";
        cin>>n;
        a=n;
    }

    void setValue (int n)
    {
        a=n;
    }

    void add (int n)
    {
        a=a+n;
        cout<<a<<endl;
    }

    void subtract (int n)
    {
        a=a-n;
        cout<<a<<endl;
    }

    void multiply (int n)
    {
        a=a*n;
        cout<<a<<endl;
    }

    void divideBy(int n)
    {
        if (n==0) cout<<"Error : divide by 0 is undefined."<<a<<endl;
        else {
            a=a/n;
            cout<<a<<endl;
        }
    }

    void clear ()
    {
        a=0;
        cout<<a<<endl;
    }

    void display()
    {
        cout<<"The end result is "<<a;
    }
};

int main ()
{
    Calculator c;
    c.add(5);
    c.subtract(3);
    c.multiply(6);
    c.divideBy(3);

}

