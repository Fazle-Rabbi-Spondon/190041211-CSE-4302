#include <iostream>
using namespace std;

class Rectangle
{
private:
    float l, w;
public:
    Rectangle (float a, float b): l(a), w(b)
    {}

    Rectangle () : l(1), w(1)
    {}


    float area ()
    {
        return l*w;
    }

    float perimeter ()
    {
        return 2*(l+w);
    }

    void setlength(float a)
    {
        if (a>=1.0 && a<=20.0) l=a;
    }

    void setwidth (float a)
    {
        if (a>=1.0 && a<=20.0) w=a;
    }

    float getlength ()
    {
        return l;
    }

    float getwidth ()
    {
        return w;
        }
};

int main ()
{
    Rectangle r1;

}
