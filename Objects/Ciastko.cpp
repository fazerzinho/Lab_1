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
