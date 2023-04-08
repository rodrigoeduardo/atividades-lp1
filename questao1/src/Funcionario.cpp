#include "Funcionario.h"

Funcionario::Funcionario() {
    this->nome = "";
}

Funcionario::Funcionario(string nome, double salario, string departamento) {
    this->nome = nome;
    this->salario = salario;
    this->departamento = departamento;
}

string Funcionario::getNome() {
    return this->nome;
}

double Funcionario::getSalario() {
    return this->salario;
}

string Funcionario::getDepartamento() {
    return this->departamento;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

void Funcionario::setDepartamento(string departamento) {
    this->departamento = departamento;
}