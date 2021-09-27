#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b;
    char caracter;
    cin >> a >> b >>caracter;
    switch (caracter)
    {
        case '/':
            if (a > b)
                cout << a / b;
            else
                cout << b / a;
            break; 
        case '*': 
                cout << a * b; 
                break; 
        case '-': 
            if (a > b)
                cout << a - b;
            else
                cout << b - a;
            break; 
        case '+': 
                cout << a + b; 
                break; 
        default:
            break;
    }
    return 0;
}