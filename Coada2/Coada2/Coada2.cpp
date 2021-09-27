#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("coada2.in");
    ofstream cout("coada2.out");
    unsigned long long x, y, z,pers=0;
    cin >> x >> y >> z;
    pers = z + y - x;
    if (z <= x)
        cout << -1;
    else
        cout << pers;
}