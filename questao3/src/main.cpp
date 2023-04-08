#include <iostream>
#include <vector>
#include <string>
#include "Livro.h"

using namespace std;

double calcularMedia(vector<double> notas) {
    double soma = 0;
    for (int i = 0; i < notas.size(); i++) {
        soma += notas[i];
    }
    return soma / notas.size();
}

double calcularMediaGeral(vector<Livro> livros) {
    double soma = 0;
    int qtdNotas = 0;
    for (int i = 0; i < livros.size(); i++) {
        vector<double> notas = livros[i].getNotas();
        for (int j = 0; j < notas.size(); j++) {
            soma += notas[j];
            qtdNotas++;
        }
    }
    return soma / qtdNotas;
}

int main() {
    Livro livro1("Mago: Aprendiz", "Raymond E. Feist");
    livro1.adicionarNota(5);
    livro1.adicionarNota(4);
    livro1.adicionarNota(4.5);

    Livro livro2("Mago: Mestre", "Raymond E. Feist");
    livro2.adicionarNota(5);
    livro2.adicionarNota(3.9);
    livro2.adicionarNota(4.1);

    Livro livro3("Percy Jackson e o Ladrão de Raios", "Rick Riordan");
    livro3.adicionarNota(5);
    livro3.adicionarNota(4.5);
    livro3.adicionarNota(4.2);

    vector<Livro> livros = {livro1, livro2, livro3};

    cout << "Média do livro " << livro1.getTitulo() << ": " << calcularMedia(livro1.getNotas()) << endl;
    cout << "Média do livro " << livro2.getTitulo() << ": " << calcularMedia(livro2.getNotas()) << endl;
    cout << "Média do livro " << livro3.getTitulo() << ": " << calcularMedia(livro3.getNotas()) << endl;

    cout << "Média geral: " << calcularMediaGeral(livros) << endl;

    return 0;
}