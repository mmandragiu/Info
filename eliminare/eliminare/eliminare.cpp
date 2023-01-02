#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[101];
    cin >> c;
    for (int i = 0; i < strlen(c); i++)
    {
        for (int j = 0; j < strlen(c); j++)
        {
            if (j != i)
                cout << c[j];
        }
        cout << endl;
    }
}