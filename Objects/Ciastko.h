//
// Created by Wiktor on 01.12.2021.
//

#ifndef UNTITLED2_CIASTKO_H
#define UNTITLED2_CIASTKO_H
#include "string"
#include "iostream"

using namespace std;

class Ciastko {
private:
    string rodzaj;
    int licznikCiastek;  //id
    int identyfikatorCiastka;    //next objects id
    int mójNumer; //id with prefix

public:
    Ciastko();

    Ciastko(const string &rodzaj);

    virtual ~Ciastko();

    const string &getRodzaj() const;

    void setRodzaj(const string &rodzaj);

    int getLicznikCiastek();

    void setLicznikCiastek(int licznikCiastek);

    int getIdentyfikatorCiastka();

    void setIdentyfikatorCiastka(int identyfikatorCiastka);

    int getMójNumer() const;

    void setMójNumer(int mójNumer);
};


#endif //UNTITLED2_CIASTKO_H
