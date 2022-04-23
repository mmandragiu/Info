#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("cifra.in");
    ofstream out("cifra.out");
    int n, c, cat = 0;
    in>>n>>c;
    while(cat*9+c<=n)
    {
        out<<cat*9+c<<" ";
        cat++;
    }
    return 0;
}
