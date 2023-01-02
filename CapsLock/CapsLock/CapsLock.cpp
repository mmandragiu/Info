#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream in("capslock.in");
    ofstream out("capslock.out");
    char c[256];
    bool caps = false;
    in.getline(c, 256);
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '#')
        {
            i++;
            while (c[i] != '#' && i<strlen(c))
            {
                c[i]=toupper(c[i]);
                i++;
            }
        }
    }
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] != '#')
            out << c[i];
    }
    return 0;
}