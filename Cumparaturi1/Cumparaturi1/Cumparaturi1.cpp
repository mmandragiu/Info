#include <iostream>
using namespace std;

int main()
{
    int s, c, n;
    cin >> s >> c >> n;
    if (s % c == 0 and s % n == 0)
        cout << "CN";
    if (s % c == 0 and s % n != 0)
        cout << "C";
    if (s % c != 0 and s % n == 0)
        cout << "N";
    if (s % c != 0 and s % n != 0)
        cout << "nimic";
    return 0;
}