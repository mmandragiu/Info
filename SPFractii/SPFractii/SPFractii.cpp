#include <iostream>
using namespace std;
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
    int a, b, c, d, numitor, numarator, cmmdc1, cmmdc2, numarator2, numitor2;
    cin >> a >> b >> c >> d;
    numarator = a * d + c * b;
    numitor = b * d;
    numarator2 = a * c;
    numitor2 = b * d;
    cmmdc1 = CMMDC(numarator, numitor);
    cmmdc2 = CMMDC(numarator2, numitor2);
    cout << numarator / cmmdc1 << " " << numitor / cmmdc1 << '\n' << numarator2 / cmmdc2 << " " << numitor2 / cmmdc2;
    return 0;
}