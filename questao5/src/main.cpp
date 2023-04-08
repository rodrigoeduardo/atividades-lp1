#include <iostream>
#include <vector>

using namespace std;

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

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vetorA[i] + vetorA[j] == x) {
                cout << "Sim" << endl;
                return 0;
            }
        }
    }

    cout << "Não" << endl;

    return 0;
}