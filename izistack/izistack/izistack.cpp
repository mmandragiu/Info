#include <fstream>
#include <stack>

using namespace std;

long long t, n, task, x, y, add, mars[1000001], k;
stack <long long> v;

int main()
{
    ifstream in("izistack.in");
    ofstream out("izistack.out");
    in >> t;
    while (t)
    {
        in >> task;
        if (task == 0)
        {
            in >> x;
            v.push(x);
            k++;
        }
        if (task == 1)
        {
            in >> x >> y >> add;
            mars[x - 1] -= add;
            mars[y] += add;
        }
        if (task == 2)
        {
            mars[k - 1] += mars[k];
            mars[k] = 0;
            k--;
            v.pop();
        }
        out << v.top() + mars[k];
    }
}