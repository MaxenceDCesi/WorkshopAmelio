#include "pch.h"
using namespace std;


int main(void) {

    Objet2DChaine chain;
    Carre carre(4);
    Rectangle rectangle(4, 5);


    chain.ajt(&carre);
    chain.ajt(&rectangle);
    chain.afficher();

    return 0;
}
