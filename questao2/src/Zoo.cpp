#include "Zoo.h"
#include "Animal.h"

Zoo::Zoo() {
    this->animais = vector<Animal>();
}

vector<Animal> Zoo::getAnimais() {
    return this->animais;
}

void Zoo::adicionarAnimal(Animal animal) {
    this->animais.push_back(animal);
}

void Zoo::removerAnimal(Animal animal) {
    for (int i = 0; i < this->animais.size(); i++) {
        if (this->animais[i].getNome() == animal.getNome()) {
            this->animais.erase(this->animais.begin() + i);
        }
    }
}