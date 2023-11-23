#pragma once

class Carre : public Rectangle {
public:
    Carre();
    Carre(int l);
    virtual std::string afficher() const override;
};
