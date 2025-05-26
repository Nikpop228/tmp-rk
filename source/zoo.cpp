#include "zoo.h"

void Cat::play(const Cat& cat) const {
    std::cout << name() << " plays with " << cat.name() << '\n';
}
void Cat::play(const Bird& bird) const {
    std::cout << name() << " plays with " << bird.name() << '\n';
}
void Cat::play(const Dog& dog) const {
    std::cout << name() << " plays with " << dog.name() << '\n';
}

void Dog::play(const Cat& cat) const {
    std::cout << name() << " plays with " << cat.name() << '\n';
}
void Dog::play(const Bird& bird) const {
    std::cout << name() << " plays with " << bird.name() << '\n';
}
void Dog::play(const Dog& dog) const {
    std::cout << name() << " plays with " << dog.name() << '\n';
}

void Bird::play(const Cat& cat) const {
    std::cout << name() << " plays with " << cat.name() << '\n';
}
void Bird::play(const Bird& bird) const {
    std::cout << name() << " plays with " << bird.name() << '\n';
}
void Bird::play(const Dog& dog) const {
    std::cout << name() << " plays with " << dog.name() << '\n';
}

void play(const IAnimal& first, const IAnimal& second) { second.play(first); }