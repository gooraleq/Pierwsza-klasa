#include "Airplane.hpp"

int main() {
    // Tworzenie objektu samolotu
    Airplane airplane("Boeing 747", 416, 988);

    // Wyświetlenie szczegółów samolotu
    airplane.display();

    // Modyfikowanie szczegółów samolotu

    airplane.setModel("Airbus A380");
    airplane.setCapacity(555);
    airplane.setSpeed(1020);

    // Wyświetlenie po dokonaniu zmian
    airplane.display();

    return 0;
}