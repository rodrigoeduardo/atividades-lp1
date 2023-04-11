#include <iostream>
#include <vector>

using namespace std;

bool existeSomaIgualX(vector<int> vector, int n, int x) {
  if (x == 0)
    return true;
  if (n == 0)
    return false;

  if (vector[n - 1] > x)
    return existeSomaIgualX(vector, n - 1, x);

  return existeSomaIgualX(vector, n - 1, x) ||
    existeSomaIgualX(vector, n - 1, x - vector[n - 1]);
}

int main() {
    vector<int> vetorA;
    int x, n;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int valor;
        cout << "Digite o valor do vetorA[" << i << "]: ";
        cin >> valor;
        vetorA.push_back(valor);
    }

    if (existeSomaIgualX(vetorA, n, x))
        cout << "Sim" << endl;
    else
        cout << "Não" << endl;

    return 0;
}