#include <fstream>
using namespace std;

bool sectoare_bogdan[40001], sectoare_rares[40001];
int n, x, y, sbogdan, srares, pozbogdan, pozrares, t;

int main()
{
    ifstream in("joc3.in");
    ofstream out("joc3.out");
    in >> n >> x >> y;
    pozbogdan = 1;
    pozrares = 1;
    bool bogdangata = false, raresgata = false;
    sectoare_bogdan[1] = true, sectoare_rares[1] = true;
    while (bogdangata == false && raresgata == false)
    {
        pozbogdan = (pozbogdan + x) % n;
        if (pozbogdan == 0)
            pozbogdan = n;
        if (sectoare_bogdan[pozbogdan] == true)
            bogdangata = true;
        sectoare_bogdan[pozbogdan] = true;
        sbogdan++;
        pozrares = (pozrares - y) % n;
        if (pozrares <= -1)
            pozrares = n + pozrares;
        if (pozrares == 0)
            pozrares = n;
        if (sectoare_rares[pozrares] == true)
            raresgata = true;
        sectoare_rares[pozrares] = true;
        srares++;
        if (pozrares == pozbogdan)
            raresgata = true, bogdangata = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (sectoare_bogdan[i] == false && sectoare_rares[i] == false)
            t++;
    }
    out << t << " " << srares << " " << pozbogdan << " " << pozrares;
    return 0;
}