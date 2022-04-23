#include <fstream>

using namespace std;

int n,x;
int maxim(int x,int max_part)
{
    return maxim(x,max_part);
}

int main()
{
    ifstream in("maxrec.in");
    ofstream out("maxrec.out");
    in>>n>>x;
    return maxim(n-1,x);
    return 0;
}
