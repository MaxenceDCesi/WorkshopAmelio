#include "pch.h"

int Objet2DChaine::compterCarres() const {
    int count = 0;
    Objet2D* temp = head;
    while (temp != nullptr) {
        if (dynamic_cast<Carre*>(temp) != nullptr) {
            count++;
        }
        temp = temp->getSuivant();
    }
    return count;
}

int Objet2DChaine::compterRectangles() const {
    int count = 0;
    Objet2D* temp = head;
    while (temp != nullptr) {
        if (dynamic_cast<Rectangle*>(temp) != nullptr) {
            count++;
        }
        temp = temp->getSuivant();
    }
    return count;
}

