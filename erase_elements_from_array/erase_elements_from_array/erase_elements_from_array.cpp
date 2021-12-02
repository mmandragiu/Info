#include <vector>
#include <iostream>
using namespace std;




int main()
{
    vector<int> myvector;
    int n, a, b, x, element;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> element;
        myvector.push_back(element);
    }
    cin >> x >> a >> b;
    // erase the xth element
    myvector.erase(myvector.begin() + x - 1);
    myvector.erase(myvector.begin() + a - 1, myvector.begin() + b - 1);
    std::cout << myvector.size() << '\n';
    for (unsigned i = 0; i < myvector.size(); ++i)
        std::cout << myvector[i] << " ";
    std::cout << '\n';
}
