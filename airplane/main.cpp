#include "Airplane.hpp"

int main() {
    // Tworzenie objektu samolotu
    Airplane airplane("Boeing 747", 416, 988);

    // Wy�wietlenie szczeg��w samolotu
    airplane.display();

    // Modyfikowanie szczeg��w samolotu

    airplane.setModel("Airbus A380");
    airplane.setCapacity(555);
    airplane.setSpeed(1020);

    // Wy�wietlenie po dokonaniu zmian
    airplane.display();

    return 0;
}