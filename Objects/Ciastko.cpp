//
// Created by Wiktor on 01.12.2021.
//

#include "Ciastko.h"

Ciastko::Ciastko() {
    this->rodzaj = "maślane";
    cout << "Konstruktor domyślny: " << this->rodzaj << "\n";
}

Ciastko::Ciastko(const string &rodzaj) : rodzaj(rodzaj) {
    this->rodzaj = rodzaj;
    cout << "Konstruktor z parametrem: " << this->rodzaj << "\n";
}

Ciastko::~Ciastko() {
    cout << "Destruktor: " << this->rodzaj << "\n";cout << "Konstruktor domyślny: " << this->rodzaj << "\n";
}

const string &Ciastko::getRodzaj() const {
    return rodzaj;
}

void Ciastko::setRodzaj(const string &rodzaj) {
    Ciastko::rodzaj = rodzaj;
}

int Ciastko::getLicznikCiastek() {
    return licznikCiastek;
}

void Ciastko::setLicznikCiastek(int licznikCiastek) {
    Ciastko::licznikCiastek = licznikCiastek;
}

int Ciastko::getIdentyfikatorCiastka() {
    return identyfikatorCiastka;
}

void Ciastko::setIdentyfikatorCiastka(int identyfikatorCiastka) {
    Ciastko::identyfikatorCiastka = identyfikatorCiastka;
}

int Ciastko::getMójNumer() const {
    return mójNumer;
}

void Ciastko::setMójNumer(int mójNumer) {
    Ciastko::mójNumer = mójNumer;
}
