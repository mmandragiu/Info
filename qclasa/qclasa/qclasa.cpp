#include <fstream>
using namespace std;

struct elev{
    int cod, medie, absente;
};

elev clasa[45];

int main()
{
    ifstream cin("qclasa.in");
    ofstream cout("qclasa.out");
    int n, elevi_de_10 = 0;
    double media_clasei;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> clasa[i].cod >> clasa[i].medie >> clasa[i].absente;
        if (clasa[i].medie == 10)
            elevi_de_10++;
        media_clasei += clasa[i].medie;
    }
    cout<<elevi_de_10<<endl<<(int)
}