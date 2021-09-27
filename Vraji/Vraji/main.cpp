#include <fstream>
using namespace std;
ifstream in("vraji.in");
ofstream out("vraji.out");
int main()
{
    int n, puterea1, viteza1, puterea2, viteza2, rest,a,b,max=1;
    in >> n;
    in >> puterea1 >> viteza1;
    a = puterea1 * viteza1;
    if (a > max)//aflam maximul
        max = a;
    for (int i = 2; i <= n; i++)
    {
        in >> puterea2 >> viteza2;
        b = puterea2 * viteza2;
        if (b > max)//aflam maximul
            max = b;
        //numarul minim de cutii pentru obiecte este cmmdc dintre obiectele aduse de fiecare
        while (b != 0)
        {
            rest = a % b;
            a = b;
            b = rest;
        }
    }
    out << max << '\n' << a;
}