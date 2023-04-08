// Escreva uma programa que lê um vetor A e um valor “x”. O algoritmo
// deve informar se existe uma combinação de elementos no vetor A, cuja
// a soma seja igual a “x”, ou seja, se existe imprima "Sim", caso contrário
// "Não". Use a biblioteca STL para criar o vetor.
// Ex.1: vetorA = {2, 8, 3, 7} e x = 5 saída “Sim”, pois 2+3=5
// Ex.2: vetorA = {2, 8, 3, 7, 21} e x = 19 saída “Não”
// Ex.3: vetorA = {2, 50, 8, 3, 7, 22} e x = 18 saída “Sim”, pois 8+3+7=18

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