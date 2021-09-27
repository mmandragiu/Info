#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        cout << i << " ";/*
    for (int i = a; i <= b; i++)
    {
        int ogl = 0;
        int copiei = i;
        while (copiei)
        {
            ogl = ogl * 10 + copiei % 10;
            copiei /= 10;
        }
        if (sqrt(i) == (int)sqrt(i) && sqrt(ogl) == (int)sqrt(ogl))
            c++;
    }
    cout << c;*/
    return 0;
}