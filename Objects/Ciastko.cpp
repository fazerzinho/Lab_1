//
// Created by Wiktor on 01.12.2021.
//

#include "Ciastko.h"

Ciastko::Ciastko() {
    setRodzaj("maślane");
    cout << "Konstruktor domyślny: " << getRodzaj() << ", " << getIdentyfikatorCiastka() << ", " << getLicznikCiastek() <<
                                     ", " << getMójNumer() <<"\n";
}

Ciastko::Ciastko(const string &rodzaj) : rodzaj(rodzaj) {
    setRodzaj(rodzaj);
    cout << "Konstruktor z parametrem: " << getRodzaj() << ", " << getIdentyfikatorCiastka() << ", " << getLicznikCiastek() <<
                                         ", " << getMójNumer() <<"\n";
}

Ciastko::~Ciastko() {
    cout << "Destruktor: " << getRodzaj() << ", " << getIdentyfikatorCiastka() << ", " << getLicznikCiastek() <<
                           ", " << getMójNumer() <<"\n";
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
