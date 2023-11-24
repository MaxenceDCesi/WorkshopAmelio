#include "pch.h"
using namespace std;

int main(void) {

    Objet2DChaine chain;

    int nombreDeCarres;
    cout << "Entrez le nombre de carres a ajouter : ";
    cin >> nombreDeCarres;

    for (int i = 0; i < nombreDeCarres; ++i) {
        int longueur;
        cout << "Entrez la longueur du carre " << i + 1 << " : ";
        cin >> longueur;

        Carre* carre = new Carre(longueur);
        chain.ajouterEnQueue(carre);
    }

    int nombreDeRectangles;
    cout << "Entrez le nombre de rectangles a ajouter : ";
    cin >> nombreDeRectangles;

    for (int i = 0; i < nombreDeRectangles; ++i) {
        int largeur, hauteur;
        cout << "Entrez la largeur du rectangle " << i + 1 << " : ";
        cin >> largeur;
        cout << "Entrez la hauteur du rectangle " << i + 1 << " : ";
        cin >> hauteur;

        Rectangle* rectangle = new Rectangle(largeur, hauteur);
        chain.ajouterEnQueue(rectangle);
    }

    cout << "Apres l'ajout des carres et rectangles :" << endl;
    chain.afficherInfos();

    cout << "Nombre de carres dans la liste : " << chain.compterCarres() << endl;
    cout << "Nombre de rectangles dans la liste : " << chain.compterRectangles() << endl;

    Objet2D* temp = chain.getHead();
    while (temp != nullptr) {
        Objet2D* next = temp->getSuivant();
        delete temp;
        temp = next;
    }

    return 0;
}
