#include <iostream>
using namespace std;
int sumcif(int n)
{
    int sumcif = 0;
    while (n)
    {
        sumcif += n % 10;
        n = n / 10;
    }
    return sumcif;
}

int main()
{
    int n, v[200],perechi=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sumcif(v[i]) == sumcif(v[j]))
                perechi++;
        }
    }
    cout << perechi;
}