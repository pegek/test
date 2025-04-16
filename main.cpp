#include <iostream>
#include "MojaKlasa.h"

int main() {
    // Utworzenie obiektu klasy MojaKlasa
    MojaKlasa obiekt(42, "Hello World!");

    // Wywołanie metody
    obiekt.wyswietlDane();

    // Modyfikacja pól przez metody
    obiekt.ustawLiczbe(100);
    obiekt.ustawTekst("Nowy tekst");

    // Ponowne wyświetlenie danych
    obiekt.wyswietlDane();

    // Pobranie i wyświetlenie wartości pól
    std::cout << "Pobrana liczba: " << obiekt.pobierzLiczbe() << std::endl;
    std::cout << "Pobrany tekst: " << obiekt.pobierzTekst() << std::endl;

    return 0;
}