#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[256];
    cin.getline(c, 256);
    for (int i = 0; i < strlen(c); i++)
    {
        cout << c[i];
        if (strchr("aeiou", c[i]))
            i += 2;
    }
    return 0;
}