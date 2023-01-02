#include <fstream>
#include <cstring>
#include <stack>

using namespace std;

bool sameType(char c1, char c2) {
    return (c1 == '(' && c2 == ')') || (c1 == '[' && c2 == ']');
}

int main() {
    int nrTests;
    string s;
    ifstream fin("paranteze3.in");
    ofstream fout("paranteze3.out");
    fin >> nrTests;
    while (nrTests--) {
        fin >> s;
        /*for(int i = 0; i < s.size(); i++) {

        }*/
        stack<char> st;
        bool isValid = true;
        for (char c : s) {
            if (c == '(' || c == '[') {
                st.push(c);
            }
            else {
                if (!st.empty() && sameType(st.top(), c)) {
                    st.pop();
                }
                else {
                    isValid = false;
                    break;
                }
            }
        }
        if (isValid && st.empty()) {
            fout << "1\n";
        }
        else {
            fout << "0\n";
        }
    }
    return 0;
}