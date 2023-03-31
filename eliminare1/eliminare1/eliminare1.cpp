#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[55];
    cin.getline(c, 51);
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
            cout << c[i];
    }
    return 0;
}