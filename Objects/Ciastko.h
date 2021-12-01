//
// Created by Wiktor on 01.12.2021.
//

#ifndef UNTITLED2_CIASTKO_H
#define UNTITLED2_CIASTKO_H
#include "string"
#include "iostream"

using namespace std;

class Ciastko {
private: string rodzaj;

public:
    Ciastko();

    Ciastko(const string &rodzaj);

    virtual ~Ciastko();
};


#endif //UNTITLED2_CIASTKO_H
