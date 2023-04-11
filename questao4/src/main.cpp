#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    Pessoa pessoa1("João", "20", 1.80);
    Pessoa pessoa2("Maria", "30", 1.60);

    cout << "Pessoa com mais idade:" << endl;
    cout << maior(pessoa1, pessoa2) << endl;

    return 0;
}