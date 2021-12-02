#include <iostream>
using namespace std;

int v[100000];
int main()
{
    int n, q, x, y;
    cin >> n;
    int* secventa = (int*)calloc(1, sizeof(int));
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        for (int j = x - 1; j < y; j++)
        {

        }
    }
}