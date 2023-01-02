#include <fstream>

using namespace std;

int main()
{
    ifstream in("sumcolmax.in");
    ofstream out("sumcolmax.out");
    int a[27][27],n,m,summax=-0xFFFFFFF,col,s;
    in>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            in>>a[i][j];
        }
    }
    for(int j=1;j<=m;j++){
        s=0;
        for(int i=1;i<=n;i++){
            s+=a[i][j];
        }
        if(s>summax)
            summax=s,col=j;
    }
    for(int i=1;i<=n;i++)
        out<<a[i][col]<<" ";
    return 0;
}
