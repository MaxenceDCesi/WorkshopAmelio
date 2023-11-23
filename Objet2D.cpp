#include "pch.h"

Objet2D::Objet2D() : m_x(0), m_y(0), Suivant(nullptr) {}
Objet2D::Objet2D(int x, int y) : m_x(x), m_y(y), Suivant(nullptr) {}

Rectangle::Rectangle() : Objet2D() {}
Rectangle::Rectangle(int x, int y) : Objet2D(x, y) {}


void Objet2D::setObjetSuivant(Objet2D* next) { Suivant = next; }
Objet2D* Objet2D::getSuivant() const { return Suivant; }

int Rectangle::getPerimetre() const { return 2 * m_x + 2 * m_y; }
int Rectangle::getAire() const { return m_x * m_y; }
std::string Rectangle::afficher() const { return "rectangle"; }

Carre::Carre() : Rectangle() {}
Carre::Carre(int l) : Rectangle(l, l) {}
std::string Carre::afficher() const { return "carre"; }
