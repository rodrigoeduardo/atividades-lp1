#include "Pessoa.h"

Pessoa::Pessoa(string nome, string idade, double altura) {
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
}

string Pessoa::getNome() {
    return this->nome;
}

string Pessoa::getIdade() {
    return this->idade;
}

double Pessoa::getAltura() {
    return this->altura;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setIdade(string idade) {
    this->idade = idade;
}

void Pessoa::setAltura(double altura) {
    this->altura = altura;
}

bool Pessoa::operator>(Pessoa p) {
    return this->idade > p.getIdade();
}