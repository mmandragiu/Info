// matrice7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
using namespace std;

int n, m, maxx, a[101][101], mincol[101], minim, cnt;

int main()
{
    ifstream in("matrice7.in");
    ofstream out("matrice7.out");
    in >> n >> m;
    cnt = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            in >> a[i][j];
            maxx = a[i][j] > maxx ? a[i][j] : maxx;
        }
    }
    for (int j = 1; j <= m; j++)
    {
        minim = 0x7FFFFFFF;
        for (int i = 1; i <= n; i++)
        {
            if (a[i][j] < minim)
                minim = a[i][j];
        }
        mincol[cnt] = minim;
        cnt++;
    }
    cnt--;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == maxx)
                a[i][j] = mincol[j];
            out << a[i][j] << " ";
        }
        out << endl;
    }
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
