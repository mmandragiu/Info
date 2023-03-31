#include <fstream>
#include <cstring>
using namespace std;

char c[200000], * p, matrix[500][500], new_c[200000];
int length_no_space, n, m, cer, contor;

int main()
{
    ifstream in("text.in");
    ofstream out("text.out");
    in >> cer;
    in.get();
    in.get(c, 200000);
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] != ' ')
        {
            contor++;
            new_c[contor] = c[i];
            length_no_space++;
        }
    }
    for (int d = 1; d * d <= length_no_space; d++)
    {
        if (length_no_space % d == 0)
        {
            n = d;
            m = length_no_space / d;
        }
    }
    int l = 1, c = 0;
    for (int i = 1; i <= contor; i++)
    {
        c++;
        if (c > m)
        {
            l++;
            c = 1;
        }
            matrix[l][c] = new_c[i];
    }
    if (cer == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                out << matrix[i][j];
            out << endl;
        }
    }
    return 0;
}
