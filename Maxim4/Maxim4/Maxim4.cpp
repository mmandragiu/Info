#include <fstream>
using namespace std;

int main()
{
    ifstream in("maxim4.in");
    ofstream out("maxim4.out");
    int n, v[100],max=-1000,aparitii=0;
    in >> n;
    for (int i = 0; i <= n; i++)
    {
        in >> v[i];
        if (v[i] > max)
        {
            aparitii = 1;
            max = v[i];
        }
        else
        {
            if (v[i] == max)
                aparitii++;
        }
    }
    out << max << " " << aparitii;
}