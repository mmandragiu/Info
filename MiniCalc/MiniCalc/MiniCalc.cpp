#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    switch (c)
    {
        case 1:
        {
            cout << a + b;
            return 0;
        }
        case 2:
        {
            cout << a - b;
            return 0;
        }
        case 3:
        {
            cout << a * b;
            break;
        }
        case 4:
        {
            cout << b / a;
            return 0;
        }
        case 5:
        {
            cout << a % b;
            return 0;
        }
    }
    return 0;
}