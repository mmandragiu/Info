#include <iostream>
using namespace std;

int main()
{
    int n,nrrand=1;
    char c;
    cin >> n;
    cin>>c;
    while (nrrand <= n)
    {
        for (int i = 1; i <= nrrand; i++)
            cout << c;
        cout << endl;
        nrrand++;
    }
    return 0;
}