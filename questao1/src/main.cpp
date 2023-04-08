#include <iostream>
#include "Funcionario.h"
#include <vector>

using namespace std;

void imprimirFuncionariosPorDepartamento(string departamento, vector<Funcionario> funcionarios) {
    int length = funcionarios.size();

    for (int i = 0; i < length; i++) {
        if (funcionarios[i].getDepartamento() == departamento) {
            cout << funcionarios[i].getNome() << endl;
        }
    }
}

vector<Funcionario> aumentarSalarios(int porcentagem, string departamento, vector<Funcionario> funcionarios) {
    vector<Funcionario> novoFuncionarios = funcionarios;
    int length = funcionarios.size();
    double bonus = (porcentagem+100.0)/100.0;

    for (int i = 0; i < length; i++) {
        if (novoFuncionarios[i].getDepartamento() == departamento) {
            double novoSalario = novoFuncionarios[i].getSalario() * bonus;
            novoFuncionarios[i].setSalario(novoSalario);
        }
    }

    return novoFuncionarios;
}

int main() {
    vector<Funcionario> funcionarios(4);

    funcionarios[0] = Funcionario("Rodrigo", 8000, "TI");
    funcionarios[1] = Funcionario("Samyra", 10000, "TI");
    funcionarios[2] = Funcionario("Judyson", 3200, "Saúde");
    funcionarios[3] = Funcionario("Ana Júlia", 6000, "Compras");

    imprimirFuncionariosPorDepartamento("TI", funcionarios);
    funcionarios = aumentarSalarios(5, "Compras", funcionarios);

    cout << funcionarios[3].getSalario() << endl;

    return 0;
}