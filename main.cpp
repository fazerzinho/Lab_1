#include "Objects/Ciastko.h"
#include "list"
int main() {
    list<Ciastko> lista;
    lista.begin();
    lista.assign(1,Ciastko());

    return 0;
}
