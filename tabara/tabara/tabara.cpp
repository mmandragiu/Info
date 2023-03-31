#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

stack <int> stk;

int main()
{
    ifstream in("tabara.in");
    ofstream out("tabara.out");
    bool luat[151];
    int activitati[155][105], n, k, grupa[155] = { 0 }, nr_grupe = 1;
    in >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
            in >> activitati[i][j];
    }
    grupa[1] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int i1 = 1; i1 <= n; i1++)
        {
            bool found = false;
            if(grupa[i]!=grupa[i1]&&(grupa[i]!=0||grupa[i1]!=0))

            for (int j = 1; j <= k; j++)
            {
                for (int j1 = 1; j1 <= k; j1++)
                {
                    if (activitati[i][j] == activitati[i1][j1])
                    {
                        
                    }
                }
            }
        }
    }
}