#include <fstream>
using namespace std;
ifstream in("porumb.in");
ofstream out("porumb.out");

int main()
{
    int n, x, i, agri1 = 0, agri = 0, y = 0, nrbun = 1;
    in >> n >> x;
    int copien = n;
    agri1 =(n+1)/2;
    while (n)
    {
        n = n / 2;
        agri++;
    }
    while (x % 2 == 0)
    {
        x = x / 2;
        y++;
    }
    out << agri1 << '\n' << agri << '\n' << y+1;
    n = copien;
    do
    {
        nrbun = nrbun * 2;
    } while (nrbun < n);
    out << '\n' << nrbun/2;
}