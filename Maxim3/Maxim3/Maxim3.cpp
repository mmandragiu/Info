#include <iostream>
#include <fstream>
using namespace std;
ifstream in("maxim3.in");
ofstream out("maxim3.out");

int main()
{
    int a, b, c;
    in >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            out << a;
        else
            out << c;
    }
    else
    {
        if (b > c)
            out << b;
        else
            out << c;
    }
}