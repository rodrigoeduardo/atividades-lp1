#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {

private:
    string nome;
    string idade;
    double altura;

public:
    Pessoa(string nome, string idade, double altura);
    string getNome();
    string getIdade();
    double getAltura();
    void setNome(string nome);
    void setIdade(string idade);
    void setAltura(double altura);
};

#endif