#include <iostream>
using namespace std;

int main() {
  int n, m, s;
  while (cin >> n >> m >> s) {
    if (n == m && m == s && s == 0)
      break;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    char campo[n + 1][m + 1];
    int cont = 0, x = 0, y = y;
    int action = 0;
    char act[s], t;
    int pontos = 0;
    char ref[4] = {'N', 'L', 'S', 'O'};
    int d;

    // leiturainicial
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> campo[i][j];
      }
    }
    // acharposinicialedireção
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (campo[i][j] == 'N') {
          x = i;
          y = j;
          d = 0;
          break;

        } else if (campo[i][j] == 'S') {
          x = i;
