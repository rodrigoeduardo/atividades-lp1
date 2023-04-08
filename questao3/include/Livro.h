#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include <vector>
using namespace std;

class Livro {

private:
    string titulo;
    string autor;
    vector<double> notas;

public:
    Livro(string titulo, string autor);
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setNotas(vector<double> notas);
    string getTitulo();
    string getAutor();
    vector<double> getNotas();
    void adicionarNota(double nota);
    void removerNota(double nota);
};

#endif