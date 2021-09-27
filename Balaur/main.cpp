#include <fstream>

using namespace std;
ifstream in("balaur.in");
ofstream out("balaur.out");

int main()
{
    int n,capeteramase=5;
    in>>n;
    capeteramase=capeteramase*n;
    out<<capeteramase;
    return 0;
}
