#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario {

private:
    string nome;
    double salario;
    string departamento;

public:
    Funcionario();
    Funcionario(string nome,
                double salario,
                string departamento);
    
    string getNome();
    double getSalario();
    string getDepartamento();

    void setNome(string nome);
    void setSalario(double salario);
    void setDepartamento(string departamento);
};

#endif