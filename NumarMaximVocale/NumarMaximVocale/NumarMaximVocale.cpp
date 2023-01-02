#include <fstream>
#include <cstring>
using namespace std;

bool isVocal(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    else
        return false;
}

int main()
{
    ifstream in("vocmax.in");
    ofstream out("vocmax.out");
    char c[255], t[255];
    int prop, vocals = 0, max_vocals = -1, poz_max = 0;
    in >> prop;
    for (int i = 0; i <= prop; i++)
    {
        vocals = 0;
        in.getline(c, 255);
        int j = 0;
        for (int j = 0; j < strlen(c); j++)
        {
            if (isVocal(c[j]) && c[j] != '\0')
                vocals++;
        }
        if (vocals >= max_vocals)
            max_vocals = vocals, strcpy_s(t,c);
    }
    out << t;
    return 0;
}