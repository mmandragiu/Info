#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b, c, s1 = 0, s2 = 0;
    cin >> a >> b >> c;
    for (unsigned long long i = a ; i <= b; i++)
        s1 += i;
    for (unsigned long long i = b; i <= c; i++)
        s2 += i;
    cout << s1 << " " << s2 << " " << s1 + s2 - b;
    return 0;
}