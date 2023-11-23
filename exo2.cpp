#include "pch.h"

Objet2DChaine::Objet2DChaine() : head(nullptr), tail(nullptr) {}

void Objet2DChaine::ajouterEnTete(Objet2D* ajouter) {
    ajouter->setObjetSuivant(head);
    head = ajouter;
    if (tail == nullptr) {
        tail = ajouter;
    }
}

void Objet2DChaine::ajouterEnQueue(Objet2D* ajouter) {
    if (tail == nullptr) {
        head = ajouter;
        tail = ajouter;
    }
    else {
        tail->setObjetSuivant(ajouter);
        tail = ajouter;
    }
}

void Objet2DChaine::ajouterAtIndex(Objet2D* ajouter, int index) {
    if (index == 0) {
        ajouterEnTete(ajouter);
    }
    else {
        Objet2D* temp = head;
        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->getSuivant();
        }
        if (temp != nullptr) {
            ajouter->setObjetSuivant(temp->getSuivant());
            temp->setObjetSuivant(ajouter);
            if (temp == tail) {
                tail = ajouter;
            }
        }
    }
}

void Objet2DChaine::supprimerEnTete() {
    if (head != nullptr) {
        Objet2D* temp = head;
        head = head->getSuivant();
        delete temp;
        if (head == nullptr) {
            tail = nullptr;
        }
    }
}

void Objet2DChaine::supprimerEnQueue() {
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    }
    else {
        Objet2D* temp = head;
        while (temp->getSuivant() != tail) {
            temp = temp->getSuivant();
        }
        delete tail;
        tail = temp;
        tail->setObjetSuivant(nullptr);
    }
}

void Objet2DChaine::supprimerAtIndex(int index) {
    if (index == 0) {
        supprimerEnTete();
    }
    else {
        Objet2D* temp = head;
        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->getSuivant();
        }
        if (temp != nullptr && temp->getSuivant() != nullptr) {
            Objet2D* toDelete = temp->getSuivant();
            temp->setObjetSuivant(toDelete->getSuivant());
            if (toDelete == tail) {
                tail = temp;
            }
            delete toDelete;
        }
    }
}

void Objet2DChaine::afficherInfos() const {
    Objet2D* temp = head;
    while (temp != nullptr) {
        std::cout << temp->afficher() << std::endl;
        temp = temp->getSuivant();
    }
}
