#include <iostream>
using namespace std;
int ProdCif(int n)
{
    unsigned long long int prod = 1;
    while (n != 0)
    {
        prod = prod * (n % 10);
        n = n / 10;
    }
    return prod;
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
    int a, b,prodcifa,prodcifb;
    cin >> a >> b;
    prodcifa = ProdCif(a);
    prodcifb = ProdCif(b);
    if (CMMDC(prodcifa, prodcifb) == 1)
        cout << "DA";
    else
        cout << "NU";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
