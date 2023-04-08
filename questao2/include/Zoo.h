#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "Animal.h"
using namespace std;

class Zoo {
private:
    vector<Animal> animais;

public:
    Zoo();
    vector<Animal> getAnimais();
    void adicionarAnimal(Animal animal);
    void removerAnimal(Animal animal);
};

#endif