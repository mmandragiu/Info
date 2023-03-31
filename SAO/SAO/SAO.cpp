#include <fstream>
#include <queue>

using namespace std;

priority_queue<int> q;

int main()
{
    ifstream in("sao.in");
    ofstream out("sao.out");
    int k, n;
    long long hp;
    in >> n >> k >> hp;
    for (int i = 1; i <= n; i++)
    {
        int damage;
        in >> damage;
        if (damage < 0)
        {
            hp -= damage;
        }
        else
        {
            hp -= damage;
            q.push(damage);
            while (hp <= 0 && k && !q.empty())
            {
                hp += q.top();
                k--;
                q.pop();
            }
            if (hp == 0)
            {
                out << i;
                return 0;
            }
            if (hp < 0)
            {
                out << i - 1;
                return 0;
            }
        }
    }
    out << n;
    return 0;
}