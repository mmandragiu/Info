#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[105];
    cin.getline(c, 105);
    for (int i = 0; i < strlen(c); i++) {
        cout << c[i];
        if (strchr("aeiou", c[i]))
            cout << c[i];
    }
    return 0;
}