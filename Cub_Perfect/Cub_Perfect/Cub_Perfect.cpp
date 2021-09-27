#include<iostream>

#include<cmath>

using namespace std;

int main()

{
    long long v[50] = { 0 };
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];
    for (i = 1; i <= n; i++)
    {

        if (int(cbrt(v[i])) * int(cbrt(v[i])) * int(cbrt(v[i])) == v[i])
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
    return 0;
}