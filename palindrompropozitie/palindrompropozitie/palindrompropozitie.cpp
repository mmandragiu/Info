#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream in("palindrom.in");
    ofstream out("palindrom.out");
    char prop[201], prop_2[201],length;
    int n;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        length = 0;
        bool palindrom = true;
        in.getline(prop, 200);
        for (int j = 0; j < strlen(prop); j++)
        {
            if (prop[j] != ' ')
                prop_2[length] = prop[j], length++;
        }
        for (int j = 0; j < length / 2 + 1; j++)
        {
            if (prop_2[j] != prop_2[length - j - 1])
                palindrom = false;
        }
        out << palindrom << endl;
    }
    return 0;
}