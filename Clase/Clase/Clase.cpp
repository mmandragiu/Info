#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("clase.in");
ofstream out("clase.out");

int main()
{
    unsigned long long clase[10000], pachete[10000], n, m, cls = 0;
    in >> n;
    for (unsigned long long i = 0; i < n; i++)
        in >> clase[i];
    sort(clase, clase + n);
    in >> m;
    for (unsigned long long i = 0; i < m; i++)
    {
        in >> pachete[i];
        int left = 0, right = n - 1;
        bool found = false;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (clase[mid] == pachete[i])
            {
                found = true;
                break;
            }
            else
            {
                if (clase[mid] < pachete[i])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        if (found == true)
            cls++;
    }
    out << cls;
}