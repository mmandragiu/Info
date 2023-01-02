// pow2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
using namespace std;

const int Nmax = 100005;
const int Smax = 2000000000;
int a[Nmax], n;
long long countPairs(long long S) { //cate perechi (a[i],a[j]) cu suma S exista
    unordered_map<long long, int> fr;
    fr[a[1]]++;
    long long sol = 0;
    for (int j = 2; j <= n; j++)
    {
        sol += fr[S - a[j]];
        fr[a[j]]++;
    }
    return sol;
}


int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    long long sol = 0;
    for (long long S = 1; S <= Smax; S *= 2)
        sol += countPairs(S);
    cout << sol;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file