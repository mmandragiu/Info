#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c1[250], c2[250];
    cin.getline(c1, sizeof(c1));
    cin.getline(c2, sizeof(c2));
    int i = 0, j = 0;
    for (int i = 0; i < strlen(c1); i++)
    {
        if (strchr(c2, c1[i]))
            cout << c1[i];
    }
    return 0;
}