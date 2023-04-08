#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

bool operator>(Pessoa a, Pessoa b) {
    return a.getIdade() > b.getIdade();
}

ostream& operator<<(ostream& os, Pessoa pessoa) {
    os << "Nome: " << pessoa.getNome() << endl;
    os << "Idade: " << pessoa.getIdade() << endl;
    os << "Altura: " << pessoa.getAltura() << endl;
    return os;
}

int main() {
    Pessoa pessoa1("João", "20", 1.80);
    Pessoa pessoa2("Maria", "30", 1.60);

    cout << "Pessoa com mais idade:" << endl;
    cout << maior(pessoa1, pessoa2) << endl;

    return 0;
}