#pragma once

class Objet2DChaine {
public:
    Objet2DChaine();
    Objet2DChaine(Objet2D* premierMembreDeLaChaine);
    void ajouterEnTete(Objet2D* ajouter);
    void ajouterEnQueue(Objet2D* ajouter);
    void ajouterAtIndex(Objet2D* ajouter, int index);
    void supprimerEnTete();
    void supprimerEnQueue();
    void supprimerAtIndex(int index);
    void afficherInfos() const;
    int compterCarres() const;
    int compterRectangles() const;
    Objet2D* getHead() const {
        return head;
    }
private:
    Objet2D* head;
    Objet2D* tail;
};
