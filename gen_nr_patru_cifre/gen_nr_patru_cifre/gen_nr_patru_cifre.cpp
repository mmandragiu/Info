#include <iostream>
using namespace std;

int main()
{
    int c1, c2;
    cin >> c1 >> c2;
    for (int i = c1 * 1000; i <= 9999; i++)
    {
        if (i / 1000 >= c1 && (i / 10) % 10 <= c2 && (i / 100) % 10 == i % 10 && ((i / 100) % 10) % 2 == 0 && (i % 10) % 2 == 0)
            cout << i << endl;
    }
    return 0;
}