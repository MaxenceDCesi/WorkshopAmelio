#pragma once


class Rectangle : public Objet2D {
public:
    Rectangle();
    Rectangle(int x, int y);
    virtual int getPerimetre() const override;
    virtual int getAire() const override;
    virtual std::string afficher() const override;
};
