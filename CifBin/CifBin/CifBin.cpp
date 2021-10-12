#include <iostream>
using namespace std;

int main()
{
    int n, cat = -1, cif1 = 0, cif0 = 0, cifnb2[100] = { 0 }, i = 0;
    cin >> n;
    cat = n / 2;
    cifnb2[i] = n % 2;
    i++;
    n /= 2;
    while (cat > 0)
    {
        cifnb2[i] = cat % 2;
        i++;
        cat /= 2;
    }
    for (int j = 0; j < i; j++)
        if (cifnb2[j] == 1)
            cif1++;
        else
            cif0++;
    cout << cif0 << " " << cif1;
    return 0;
}
