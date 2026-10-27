#include<iostream>
using namespace std;

class Calculator
{
    public:
    int add (int a, int b)
    {
        return a+b;
    }

    int add(int a, int b, int c)
    {
        return a + b +c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};
int main ()
{
    Calculator c;
    float x = 2.5;
    cout << "addition of 2 integers: " << c.add(10, 20) << endl;

    cout << "addition  of 3 integers: " << c.add(32, 45, 245) << endl;

    cout << "addition of float values: " << c.add( 2.5f, 45.5f) << endl;

    return 0;

}

