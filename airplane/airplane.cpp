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

// Pojemno�� samolotu
int Airplane::getCapacity() const {
    return capacity;
}

// Pr�dko�� samolotu
double Airplane::getSpeed() const {
    return speed;
}

// Model samolotu setter
void Airplane::setModel(const std::string& model_val) {
    model = model_val;
}

// Pojemno�� samolotu setter
void Airplane::setCapacity(int capacity_val) {
    capacity = capacity_val;
}

// Pr�dko�� samolotu setter
void Airplane::setSpeed(double speed_val) {
    speed = speed_val;
}

// Metoda wy�wietlenia
void Airplane::display() const {
    std::cout << "Airplane model: " << model << ", Capacity: " << capacity << " passengers, Speed: " << speed << " km/h\n";
}