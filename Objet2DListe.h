#pragma once

class Objet2DChaine {
public:
    Objet2DChaine();
    Objet2DChaine(Objet2D* premierMembreDeLaChaine);
    void ajt(Objet2D* ajouter);
    void afficher() const;

private:
    Objet2D* head;
};
