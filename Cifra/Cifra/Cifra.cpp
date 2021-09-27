#include <fstream>
#include <sstream>

using namespace std;
ifstream cin("cifra.in");
ofstream cout("cifra.out");
int main()
{
    int n, c, contor = 0; 
    ostringstream os;
    cin >> n >> c;
    for (int i = c; i <= n; i = i + 9)
    {
        if (contor <= 480000)
        {
            os << i << " ";
            contor++;
        }
        else
        {
            cout << os.str();
            os.clear();
            contor = 0;
        }
    }
    cout << os.str();
    return 0;
}