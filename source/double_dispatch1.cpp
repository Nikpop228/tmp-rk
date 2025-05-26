// Double dispatching via virtual functions
#include "zoo.h"

int main() {
    std::unique_ptr<IAnimal> upCat{std::make_unique<Cat>()};
    std::unique_ptr<IAnimal> upDog{std::make_unique<Dog>()};
    std::unique_ptr<IAnimal> upBird{std::make_unique<Bird>()};

    play(*upCat, *upDog);
    play(*upCat, *upBird);
    play(*upDog, *upBird);

    play(*upDog, *upCat);
    play(*upBird, *upCat);
    play(*upBird, *upDog);
}
