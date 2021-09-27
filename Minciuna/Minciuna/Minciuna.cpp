#include <iostream>
using namespace std;

int main()
{
    int x, y,max,min;
    cin >> x >> y;
    if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }
    if (min == max)
    {
        cout << "minciuna";
        return 0;
    }
    if ((max - min == 1 and min % 2 == 0) ||max-min>=2 )
        cout << "Andrei e mai responsabil";
    else
    {
        if (max - min == 1 and min % 2 == 1)
            cout << "minciuna";
    }
    return 0;
}