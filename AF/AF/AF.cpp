#include <fstream>
using namespace std;

ifstream in("af.in");
ofstream out("af.out");

int main()
{
    unsigned long long int nr1, nr2, nr3, n;
    char semn1,semn2;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> nr1 >> semn1 >> nr2 >> semn2 >> nr3;
        if (semn1 == '+')
        {
            if (nr1 + nr2 == nr3)
                out << "Adevarat"<<'\n';
            else
                out << "Fals"<<'\n';
        }
        if (semn1 == '-')
        {
            if (nr1 - nr2 == nr3)
                out << "Adevarat"<<'\n';
            else
                out << "Fals" << '\n';
        }
        if (semn1 == 'x')
        {
            if (nr1 * nr2 == nr3)
                out << "Adevarat" << '\n';
            else
                out << "Fals" << '\n';
        }
        if (semn1 == ':')
        {
            if (nr2 != 0)
                if (nr1 / nr2 == nr3)
                    out << "Adevarat" << '\n';
                else
                    out << "Fals" << '\n';
            else
                if(nr2==0)
                    out << "Fals" << '\n';
        }
    }
}