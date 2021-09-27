#include <iostream>
using namespace std;

int main()
{
    int n, nrrand = 1;
    cin >> n;
    while (nrrand <= n)
    {
        for (int i = 1; i <= nrrand; i++)
            cout << i << " ";
        cout << endl;
        nrrand++;
    }
    return 0;
}   