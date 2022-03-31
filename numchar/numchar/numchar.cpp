#include <fstream>
using namespace std;
char c;
int n, cifre, litere, v[101];

int main()
{
    ifstream in("numchar.in");
    ofstream out("numchar.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in.getline(v[i],101);
        if ((v[i] >= 65 && v[i] <= 90) || (v[i] >= 97 && v[i] <= 122))
            litere++;
        if (v[i] >= 48 && v[i] <= 57)
            cifre++;
    }
    out << litere << " " << cifre;
    in.close();
    out.close();
    return 0;
}