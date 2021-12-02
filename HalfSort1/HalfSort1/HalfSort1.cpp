#include <fstream>
using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

int citire(int& n, int v[])
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    return 0;
}

void sortare(int n, int v[], char x)
{
    if(x =='c')
        for (int i = 0; i < n / 2 - 1; i++)
        {
            for (int j = i + 1; j < n / 2; j++)
            {
                if (v[i] > v[j])
                    swap(v[i], v[j]);
            }
        }
    else
        for (int i = n / 2; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] < v[j])
                    swap(v[i], v[j]);
            }
        }   
}

int afisare(int n, int v[])
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}

int main()
{
    int n, v[101],x;
    citire(n, v);
    sortare(n, v, 'c');
    sortare(n, v, 'd');
    afisare(n, v);
}
