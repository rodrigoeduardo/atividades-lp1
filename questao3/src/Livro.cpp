#include "Livro.h"

Livro::Livro(string titulo, string autor) {
    this->titulo = titulo;
    this->autor = autor;
    this->notas = {};
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

void Livro::setNotas(vector<double> notas) {
    this->notas = notas;
}

string Livro::getTitulo() {
    return this->titulo;
}

string Livro::getAutor() {
    return this->autor;
}

vector<double> Livro::getNotas() {
    return this->notas;
}

void Livro::adicionarNota(double nota) {
    this->notas.push_back(nota);
}

void Livro::removerNota(double nota) {
    for (int i = 0; i < this->notas.size(); i++) {
        if (this->notas[i] == nota) {
            this->notas.erase(this->notas.begin() + i);
        }
    }
}
