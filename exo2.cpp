#include "pch.h"

Objet2DChaine::Objet2DChaine() : head(nullptr) {}
Objet2DChaine::Objet2DChaine(Objet2D* premierObjet) : head(premierObjet) {}

void Objet2DChaine::ajt(Objet2D* ajouter) {
    if (head == nullptr) {
        head = ajouter;
        return;
    }
    Objet2D* temp = head;
    while (temp->getSuivant() != nullptr) temp = temp->getSuivant();
    temp->setObjetSuivant(ajouter);
}

void Objet2DChaine::afficher() const {
    Objet2D* temp = head;
    while (temp != nullptr) {
        std::cout << temp->afficher() << std::endl;
        temp = temp->getSuivant();
    }
}
