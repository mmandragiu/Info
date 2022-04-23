#include <iostream>
#include <fstream>

using namespace std;

const int N = 2000;
int v[N + 1];

int main()
{
    ifstream in("sortare.in");
    ofstream out("sortare.out");

    int n; in >> n;
    for (int i = 1; i <= n; i++) {
        in >> v[i];
    }

    // select sort
    for (int i = 1; i < n; i++) {
        int index_min = i;
        for (int j = i; j <= n; j++) {
            if (v[index_min] > v[j]) {
                index_min = j;
            }
        }
        // swap(v[index_min], v[i]);
        int aux = v[index_min];
        v[index_min] = v[i];
        v[i] = aux;
    }

    for (int i = 1; i <= n; i++) {
        out << v[i] << ' ';
    }
    out << "\n";

    return 0;
}
