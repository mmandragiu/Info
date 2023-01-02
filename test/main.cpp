#include <iostream>

using namespace std;

bool Prim(int n)
{
    int d=2;
    if(n<2)
        return false;
    while(d*d<=n)
    {
        if(n%d==0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    unordered-map <int,int> myMap;
    cout<<myMap.size;
    return 0;
}
