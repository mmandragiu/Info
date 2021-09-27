#include <fstream>
using namespace std;
ifstream in("concurs.in");
ofstream out("concurs.out");

int main()
{
    int H, n, x, premiantiScoalaH = 0, premiantiOrasH = 0,premiantH=0;
    in >> H >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        //cifra sutelor lui x-codul orasului
        //cifra zecilor lui x-codul scolii
        //cifra unitatilor lui x-codul de elev
        if (x == H)//aflam daca H este premiant
        {
            premiantiOrasH++;
            premiantiScoalaH++;
            premiantH = 1;
        }
        else
        {
            if (x / 100 == H / 100)//aflam cati premianti sunt in orasul lui H, inclusiv el daca este premiant
            {
                premiantiOrasH++;
            }
            if ((x / 10) % 10 == (H / 10) % 10 && x/100==H/100)
            {
                premiantiScoalaH++;
            }
        }
    }
    if (premiantH == 1)
        out << "DA" << '\n';
    else
        out << "NU" << '\n';
    out << premiantiOrasH << '\n' << premiantiScoalaH;
    return 0;
}

