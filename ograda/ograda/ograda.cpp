#include <fstream>
using namespace std;
ifstream in("ograda.in");
ofstream out("ograda.out");

int main()
{
    int C, P, X, G, V, divimpariC = 0, divpariP = 0,dv,dg;
    in >> X >> C >> P;
    V = (P - C * 2) / 2;
    G = C - V;
    if (X == 1)
        out << G << " " << V;
    if (X == 2)
    {
        for (dv = 1; dv * dv <= C; dv++)
        {
            if (C % dv == 0 and dv % 2 == 1)
            {
                divimpariC++;
                if (dv * dv < C && (C / dv) % 2 == 1)
                    divimpariC++;
            }
        }
        for (dg = 1; dg * dg <= P; dg++)
        {
            if (P % dg == 0 and dg % 2 == 0 and dg*dg==P)
                divpariP++;
            if (dg * dg < P and dg%2==0 and P%dg==0)
                    divpariP+=2;
        }
        out << divimpariC << " " << divpariP;
    }
    return 0;
}