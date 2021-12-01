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
    static int licznikCiastek;  //id
    static int identyfikatorCiastka;    //next objects id
    int mójNumer; //id with prefix
public:
    Ciastko();

    Ciastko(const string &rodzaj);

    virtual ~Ciastko();

    const string &getRodzaj() const;

    void setRodzaj(const string &rodzaj);

    static int getLicznikCiastek();

    static void setLicznikCiastek(int licznikCiastek);

    static int getIdentyfikatorCiastka();

    static void setIdentyfikatorCiastka(int identyfikatorCiastka);

    int getMójNumer() const;

    void setMójNumer(int mójNumer);
};


#endif //UNTITLED2_CIASTKO_H
