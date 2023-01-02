#include <iostream>
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
    char c[256];
    int perechi = 0;
    cin.getline(c, 256);
    for (int i = 1; i < strlen(c) - 1; i++)
    {
        if (isVocal(c[i]) && (isVocal(c[i - 1]) || isVocal(c[i + 1])))
            perechi++,i++;
    }
    cout << perechi;
}