// Sir2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("sir7.in");
    ofstream out("sir7.out");
    int C, n, x[100001] = {-1}, max = -1, primaAparitie = 0, ultimaAparitie = 0, sumaCresteri = 0;
    in >> C;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> x[i];
        if (x[i] > max) max = x[i];
    }
    if (C == 1) {
        for (int i = 1; i < n; i++) {
            bool gasit = true;
            for (int j = i + 1; j <= n; j++) {
                if (x[j] >= x[i]) gasit = false;
            }
            if (gasit)
            {
                out << i;
                return 0;
            }
        }
    }
    if (C == 2) {
        for (int i = 1; i <= n; i++) {
            bool gasit = true;
            for (int j = 0; j < i; j++)
                if (x[j] >= x[i]) gasit = false;

            if (gasit) out << i << " ";
        }
    }
    if (C == 3) {
        for(int i = 1; i<=n; i++)
            if (x[i] == max) {
                primaAparitie = i;
                break;
            }
        for (int i = n; i >=1 ; i--)
            if (x[i] == max) {
                ultimaAparitie = i;
                break;
            }
        for (int i = primaAparitie + 1; i < ultimaAparitie; i++) {
            sumaCresteri += (max - x[i]);
        }
        out << sumaCresteri;
    }
    return 0;
}

