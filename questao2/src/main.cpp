#include <iostream>
#include "Animal.h"
#include "Zoo.h"

using namespace std;

void imprimirAnimaisPorEspecie(Zoo zoo, string especie) {
    vector<Animal> animais = zoo.getAnimais();

    cout << "Animais da espécie " << especie << ":" << endl;
    for (int i = 0; i < animais.size(); i++) {
        if (animais[i].getEspecie() == especie) {
            cout << animais[i].getNome() << " | " << animais[i].getIdade() << " anos de idade" << endl;
        }
    }
}

Zoo removerAnimaisPorIdade(Zoo zoo, int idade) {
    Zoo novoZoo = zoo;
    vector<Animal> animais = novoZoo.getAnimais();

    for (int i = 0; i < animais.size(); i++) {
        if (animais[i].getIdade() > idade) {
            novoZoo.removerAnimal(animais[i]);
        }
    }

    return novoZoo;
}


int main() {
    Animal animal1("Junior", "Macaco", 6);
    Animal animal2("Mimi", "Macaco", 3);
    Animal animal3("Márcia", "Orangotango", 3);
    Animal animal4("Paulo", "Ema", 7);

    Zoo zoo = Zoo();
    zoo.adicionarAnimal(animal1);
    zoo.adicionarAnimal(animal2);
    zoo.adicionarAnimal(animal3);
    zoo.adicionarAnimal(animal4);

    imprimirAnimaisPorEspecie(zoo, "Macaco");
    zoo = removerAnimaisPorIdade(zoo, 5);

    cout << endl << "Animais após remoção:" << endl;
    imprimirAnimaisPorEspecie(zoo, "Macaco");

    return 0;
}