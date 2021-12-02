#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if ((x + 1 == y && x % 2 == 0) || (y + 1 == x && y % 2 == 0))
        cout << "Andrei e mai responsabil";
    else
        cout << "minciuna";
}