#include <fstream>

using namespace std;
ifstream in ("maxim.in");
ofstream out ("maxim.out");

int main()
{int a,b;
 in>>a>>b;
 if(a>b)
 out<<a;
 else
 out<<b;
    return 0;
}
