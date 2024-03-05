#include "Airplane.hpp"
#include <iostream>

// Konstruktor
Airplane::Airplane(const std::string& model_val, int capacity_val, double speed_val)
    : model(model_val), capacity(capacity_val), speed(speed_val) {}

// Destruktor
Airplane::~Airplane() {}

// Model samolotu
std::string Airplane::getModel() const {
    return model;
}

// Pojemnoœæ samolotu
int Airplane::getCapacity() const {
    return capacity;
}

// Prêdkoœæ samolotu
double Airplane::getSpeed() const {
    return speed;
}

// Model samolotu setter
void Airplane::setModel(const std::string& model_val) {
    model = model_val;
}

// Pojemnoœæ samolotu setter
void Airplane::setCapacity(int capacity_val) {
    capacity = capacity_val;
}

// Prêdkoœæ samolotu setter
void Airplane::setSpeed(double speed_val) {
    speed = speed_val;
}

// Metoda wyœwietlenia
void Airplane::display() const {
    std::cout << "Airplane model: " << model << ", Capacity: " << capacity << " passengers, Speed: " << speed << " km/h\n";
}