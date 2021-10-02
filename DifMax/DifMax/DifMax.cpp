#include <iostream>

using namespace std;

int main() {
    int n, ai, aj;
    cin >> n >> ai;
    int difMax = -2000000000;
    for (int j = 1; j < n; j++) {
        cin >> aj;
        difMax = max(difMax, ai - aj);
        ai = max(ai, aj);
    }
    cout << difMax;
    return 0;
}
