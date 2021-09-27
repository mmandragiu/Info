#include <iostream>
using namespace std;

int cmmdc(int a, int b, int* nrSchimb) {
    while (b != 0) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        if (b > 0)
            *nrSchimb = *nrSchimb + 1;
    }
    return a;
}

int main()
{
    int a, b, copiea, copieb, nrSchimb = 0, cmmdcCurent = 0;
    cin >> a >> b;
    copiea = a;
    copieb = b;
    if (a == b)
    {
        cout << 1;
        return 0;
    }
    while (b != 0) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        if (b > 0)
            nrSchimb = nrSchimb + 1;
    }
    cmmdcCurent = a;

    while (cmmdcCurent == 1)
    {
        if (copiea > copieb)
            copiea = copiea - cmmdcCurent;
        else
            copieb = copieb - cmmdcCurent;

        a = copiea;
        b = copieb;

        while (b != 0) {
            if (a > b)
                a = a - b;
            else
                b = b - a;
            if (b > 0)
                nrSchimb = nrSchimb + 1;
        }
        cmmdcCurent = a;
    }

    cout << nrSchimb;

    return 0;
}
