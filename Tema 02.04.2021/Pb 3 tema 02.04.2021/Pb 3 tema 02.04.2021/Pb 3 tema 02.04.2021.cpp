#include <iostream>
using namespace std;
int SumCif(int n)
{
    int sumcif = 0;
    while (n != 0)
    {
        sumcif += n % 10;
        n = n / 10;
    }
    return sumcif;
}
int CMMDC(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, a, b, sumcifa, sumcifb, cmmmc = 1,produs;
    cin >> n >> a;
    sumcifa = SumCif(a);
    cmmmc = sumcifa;
    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        sumcifb = SumCif(b);
        produs = sumcifa * sumcifb;
        cmmmc = sumcifa*sumcifb/CMMDC(sumcifa,sumcifb);
        sumcifa = cmmmc;
    }
    cout << cmmmc;
}