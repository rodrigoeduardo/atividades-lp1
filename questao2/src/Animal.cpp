#include "Animal.h"

Animal::Animal(string nome, string especie, int idade) {
    this->nome = nome;
    this->especie = especie;
    this->idade = idade;
}

string Animal::getNome() {
    return this->nome;
}

string Animal::getEspecie() {
    return this->especie;
}

int Animal::getIdade() {
    return this->idade;
}

void Animal::setNome(string nome) {
    this->nome = nome;
}

void Animal::setEspecie(string especie) {
    this->especie = especie;
}

void Animal::setIdade(int idade) {
    this->idade = idade;
}