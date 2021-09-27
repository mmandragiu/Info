#include <fstream>
using namespace std;
ifstream cin("rapunzel.in");
ofstream cout("rapunzel.out");

int main()
{   
    long long n, m1, m2,t;
    cin >> n >> m1 >> m2;
    t = m1 + m2;
    if (n % t == 0)
        cout << n / t;
    else
        cout << n / t + 1;
    return 0;
}
