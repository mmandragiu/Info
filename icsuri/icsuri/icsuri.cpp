// icsuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int n, m, i, j, p, a[1005][1005], nr;

int main()
{
    cin >> n >> m;
    for (int k = 1; k <= m; k++)
    {
        cin >> i >> j >> p;
        a[i][j] = 1;
        int copie = p,copiei=i,copiej=j;
        while (p && i > 1 && j > 1)
        {
            i--;
            j--;
            a[i][j] = 1;
            p--;
        }
        p = copie, i = copiei, j = copiej;
        while (p && i > 1 && j < n)
        {
            i--;
            j++;
            a[i][j] = 1;
            p--;
        }
        p = copie, i = copiei, j = copiej;
        while (p && i < n && j > 1)
        {
            i++;
            j--;
            a[i][j] = 1;
            p--;
        }
        p = copie, i = copiei, j = copiej;
        while (p && i < n && j < n)
        {
            i++;
            j++;
            a[i][j] = 1;
            p--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 1)
                nr++;
    }
    cout << n * n - nr;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
