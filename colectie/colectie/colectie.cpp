#include <fstream>
#include <bitset>

using namespace std;

bitset<9000001> MyBitset1;
bitset<9000001> MyBitset2;
int n, x, cnt;

int main()
{
    ifstream in("colectie.in");
    ofstream out("colectie.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (MyBitset1[x] == 0)
            MyBitset1[x] = 1;
        else
        {
            if (MyBitset1[x] == 1)
            {
                MyBitset2[x] = 1;
            }
        }
    }
    for (int i = 0; i <= 9000000; i++)
        if (MyBitset1[i] == 1 && MyBitset2[i] == 0)
            cnt++;
    out << cnt;
    return 0;
}