#include <iostream>
using namespace std;

int a[100][100], n, m, v[100],max_elem_pare,elem,indice;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) {
        elem = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0)
                elem++;
        }
        if (elem > max_elem_pare)
        {
            max_elem_pare = elem;
            indice = 0;
            v[indice] = i;
        }
        else
        {
            if (elem == max_elem_pare)
            {
                indice++;
                v[indice] = i;
            }
        }
    }
    for (int i = 0; i <= indice; i++)
        cout << v[i] + 1 << " ";
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
