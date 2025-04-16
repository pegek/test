#include "MojaKlasa.h"
#include <iostream>

// Definicja konstruktora
MojaKlasa::MojaKlasa(int l, const std::string& t) : liczba(l), tekst(t) {}

// Definicje metod
void MojaKlasa::wyswietlDane() const {
    std::cout << "Liczba: " << liczba << ", Tekst: " << tekst << std::endl;
}

void MojaKlasa::ustawLiczbe(int l) {
    liczba = l;
}

void MojaKlasa::ustawTekst(const std::string& t) {
    tekst = t;
}

int MojaKlasa::pobierzLiczbe() const {
    return liczba;
}

std::string MojaKlasa::pobierzTekst() const {
    return tekst;
}