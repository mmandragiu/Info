#include <fstream>
using namespace std;

ifstream in("numere6.in");
ofstream out("numere6.out");

int main()
{   
    int f[10] = { 0 }, n, m;
    in >> n >> m;
    do
    {
        f[n % 10]++;
        n /= 10;
    } while (n); 
    do
    {
        f[m % 10]++;
        m /= 10;
    } while (m);
    for (int i = 9; i >= 0; i--)
        for (int j = 0; j < f[i]; j++)
            out << i;
    return 0;
}