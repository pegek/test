#ifndef MOJA_KLASA_H
#define MOJA_KLASA_H

class MojaKlasa {
private:
    int liczba;  // Prywatne pole
    std::string tekst;  // Prywatne pole

public:
    // Konstruktor
    MojaKlasa(int l, const std::string& t);

    // Metody publiczne
    void wyswietlDane() const;
    void ustawLiczbe(int l);
    void ustawTekst(const std::string& t);
    int pobierzLiczbe() const;
    std::string pobierzTekst() const;
};

#endif // MOJA_KLASA_H