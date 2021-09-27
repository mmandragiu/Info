#include <iostream>
using namespace std;

int main()
{
    int x=0, min = 1000001;
    cin >> x;
    if (x < min && x>0)
        min = x;
    while (x != 0)
    {
        cin >> x;
        if (x < min && x>0)
            min = x;
    }
    if (min == 1000001)
        cout << "NU EXISTA";
    else
        cout << min;
}