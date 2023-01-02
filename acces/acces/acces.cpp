#include <fstream>
#include <queue>

using namespace std;

const int Nmax = 1005;

char a[Nmax][Nmax];
int dist[Nmax][Nmax];
int n, m;

struct Cell {
    int x, y;
};

queue<Cell> Q;

bool isValid(Cell cell) {
    return (0 < cell.x && cell.x <= n) && (0 < cell.y && cell.y <= m) && a[cell.x][cell.y] != '#';
}

int main() {
    ifstream fin("acces.in");
    ofstream fout("acces.out");
    fin >> n >> m;
    for (int i = 1; i <= n; i++) {
        fin >> a[i] + 1; // mult mai rapid sa citesti toata linia
        for (int j = 1; j <= m; j++) {
            dist[i][j] = -1;
            if (a[i][j] == 'P') {
                dist[i][j] = 0;
                Q.push({ i, j });
            }
        }
    }

    const int dx[] = { -1, 0, 1,  0 };
    const int dy[] = { 0, 1, 0, -1 };

    while (!Q.empty()) {
        Cell cell = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            Cell cell1 = { cell.x + dx[dir], cell.y + dy[dir] };
            if (isValid(cell1) && dist[cell1.x][cell1.y] == -1) {
                dist[cell1.x][cell1.y] = dist[cell.x][cell.y] + 1;
                Q.push(cell1);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            fout << dist[i][j] << " ";
        }
        fout << "\n";
    }

    return 0;
}