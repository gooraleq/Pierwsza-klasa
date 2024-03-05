#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

#include <string>

class Airplane {
private:
    std::string model;
    int capacity;
    double speed;

public:
    // Konstruktor
    Airplane(const std::string& model_val, int capacity_val, double speed_val);

    // Destruktor
    ~Airplane();

    // Model samolotu
    std::string getModel() const;

    // Pojemno�� samolotu
    int getCapacity() const;

    // Pr�dko�c samolotu
    double getSpeed() const;

    // Model samolotu setter
    void setModel(const std::string& model_val);

    // Pojemno�� samolotu setter
    void setCapacity(int capacity_val);

    // Pr�dko�� samolotu setter
    void setSpeed(double speed_val);

    // Metoda wy�wietlenia
    void display() const;
};

#endif // AIRPLANE_HPP