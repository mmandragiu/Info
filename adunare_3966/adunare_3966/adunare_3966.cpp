#include <iostream>
using namespace std;

int main()
{
    long long a, b, ca, cb;
    bool stie = true;
    cin >> a >> b;
    ca = a;
    cb = b;
    while (a || b)
    {
        if (a % 10 + b % 10 < 10)
            stie = true;
        else
        {
            stie = false;
            break;
        }
        a /= 10;
        b /= 10;
    }
    if (stie == true)
        cout << "Gigel stie!";
    else
        cout << "Gigel nu stie! El poate cumpara " << ca + cb << " bomboane!";
    return 0;
}