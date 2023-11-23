#pragma once

class Objet2D {
public:

    Objet2D();
    Objet2D(int x, int y);
    void setObjetSuivant(Objet2D* suivant);
    Objet2D* getSuivant() const;
    virtual int getPerimetre() const = 0;
    virtual int getAire() const = 0;
    virtual std::string afficher() const = 0;


protected:
    int m_x, m_y;
    Objet2D* Suivant;
};
