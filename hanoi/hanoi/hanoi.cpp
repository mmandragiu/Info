#include <fstream>
using namespace std;

ifstream in("hanoi.in");
ofstream out("hanoi.out");

void turnurileDinHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0)
        return;
    turnurileDinHanoi(n - 1, from_rod, aux_rod, to_rod);
    out << from_rod << "->" << to_rod << endl;
    turnurileDinHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;
    char l1 = 'A', l2 = 'B', l3 = 'C';
    in >> n;
    out << (int)pow(2, n) - 1 << '\n';
    turnurileDinHanoi(n, l1, l3, l2);
    return 0;
}