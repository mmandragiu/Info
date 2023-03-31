#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("inlocuirecuvant.in");
ofstream cout("inlocuirecuvant.out");

int main()
{
    char a[100], b[100];
    cin >> a >> b;
    char ch[101];
    while (cin >> ch)
    {
        int i = 0;
        bool ok = true;
        while (ch[i] != '\0')
        {
            if (ch[i] != a[i])
                ok = false;
            i++;
        }
        if (ok)
            cout << b << ' ';
        else
            cout << ch << ' ';
    }
    return 0;
}