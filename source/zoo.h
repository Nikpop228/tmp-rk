#pragma once

#include <iostream>
#include <memory>
#include <string>

class Cat;
class Bird;
class Dog;

struct IAnimal {
    virtual std::string name() const = 0;
    virtual void play(const IAnimal&) const = 0;
    virtual void play(const Cat&) const = 0;
    virtual void play(const Bird&) const = 0;
    virtual void play(const Dog&) const = 0;
    virtual ~IAnimal() = default;
};

class Cat : public IAnimal {
public:
    std::string name() const override { return "Cat"; }
    void play(const IAnimal& animal) const override {
        animal.play(*this); // double dispatching
    }
    void play(const Cat&) const override;
    void play(const Dog&) const override;
    void play(const Bird&) const override;
};

class Dog : public IAnimal {
public:
    std::string name() const override { return "Dog"; }
    void play(const IAnimal& animal) const override {
        animal.play(*this); // double dispatching
    }
    void play(const Cat&) const override;
    void play(const Dog&) const override;
    void play(const Bird&) const override;
};

class Bird : public IAnimal {
public:
    std::string name() const override { return "Bird"; }
    void play(const IAnimal& animal) const override {
        animal.play(*this); // double dispatching
    }
    void play(const Cat&) const override;
    void play(const Dog&) const override;
    void play(const Bird&) const override;
};

void play(const IAnimal& first, const IAnimal& second);