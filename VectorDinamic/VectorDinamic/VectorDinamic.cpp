#include <iostream>

using namespace std;

class Persoana {
private:
    int greutate;
    void seCantareste() {
        cout << nume << " se cantareste dupa masa"<<endl;
    }
public:
    int inaltime;
    bool arePar;
    string nume;

    Persoana(int greutateInitiala) {
        this->greutate = greutateInitiala;
    }

    void invata() {
        cout << nume << " invata";
    }

    void citeste() {
        cout << nume << " are inaltimea de "<<inaltime<<" si citeste";
    }

    void mananca() {
        cout << nume << " are "<<greutate<<" kg si mananca"<<endl;
        greutate++;
        seCantareste();
    }
};

int main()
{
    Persoana* mihai = new Persoana(57);
    mihai->inaltime = 164;
    mihai->nume = "Mihai";

    (*mihai).mananca();
    mihai->mananca();
    mihai->mananca();

    //int n;
    //cout << "Introduceti numarul de elemente: ";
    //cin >> n;
    //
    //int* v = (int*)calloc(n, sizeof(int));
    //for (int i = 0; i < n; i++)
    //    cin >> v[i];

    //n = n + 2;
    //v = (int*)realloc(v, n*sizeof(int));

    //for (int i = 0; i < n; i++)
    //    cout << *(v + i) << " ";

    //free(v);
    return 0;
}

