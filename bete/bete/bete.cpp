// bete.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
using namespace std;

const int NMAX = 1e3 + 1;
int v1[NMAX], v2[NMAX], l, lmax, nr, n, max1, max2, lipit1[NMAX],lipit2[NMAX];

int main()
{
    ifstream in("bete1.in");
    ofstream out("bete1.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> v1[i];
        if (v1[i] > max1)
            max1 = v1[i];
        l += v1[i];
    }
    for (int i = 1; i <= n; i++)
    {
        in >> v2[i];
        if (v2[i] > max2)
            max2 = v2[i];
        l += v2[i];
    }
    in.close();
    out << l / n << '\n' << max1 + max2 << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (v1[i] + v2[j] == max1 + max2 && lipit1[i] == 0 && lipit2[j] == 0)
            {
                nr++;
                lipit1[i] = 1;
                lipit2[j] = 1;
            }
        }
    }
    out << nr << '\n';
    out.close();
    return 0;
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
