#include "Airplane.hpp"

int main() {
    // Tworzenie objektu samolotu
    Airplane airplane("Boeing 747", 416, 988);

    // Wyœwietlenie szczegó³ów samolotu
    airplane.display();

    // Modyfikowanie szczegó³ów samolotu

    airplane.setModel("Airbus A380");
    airplane.setCapacity(555);
    airplane.setSpeed(1020);

    // Wyœwietlenie po dokonaniu zmian
    airplane.display();

    return 0;
}