#include <fstream>
using namespace std;
ifstream cin("resturi.in");
ofstream cout("resturi.out");

int main()
{
    int a, b, c, s = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
        s += i % c;
    cout << s;
    return 0;
}