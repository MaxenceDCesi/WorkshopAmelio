#include "pch.h"
using namespace std;

int main(void) {

    Objet2DChaine chain;

    // Demander à l'utilisateur le nombre de carrés à ajouter
    int nombreDeCarres;
    cout << "Entrez le nombre de carres a ajouter : ";
    cin >> nombreDeCarres;

    // Créer et ajouter les carrés à la liste
    for (int i = 0; i < nombreDeCarres; ++i) {
        int longueur;
        cout << "Entrez la longueur du carre " << i + 1 << " : ";
        cin >> longueur;

        Carre* carre = new Carre(longueur);
        chain.ajouterEnQueue(carre);
    }

    // Demander à l'utilisateur le nombre de rectangles à ajouter
    int nombreDeRectangles;
    cout << "Entrez le nombre de rectangles a ajouter : ";
    cin >> nombreDeRectangles;

    // Créer et ajouter les rectangles à la liste
    for (int i = 0; i < nombreDeRectangles; ++i) {
        int largeur, hauteur;
        cout << "Entrez la largeur du rectangle " << i + 1 << " : ";
        cin >> largeur;
        cout << "Entrez la hauteur du rectangle " << i + 1 << " : ";
        cin >> hauteur;

        Rectangle* rectangle = new Rectangle(largeur, hauteur);
        chain.ajouterEnQueue(rectangle);
    }

    // Afficher les informations après l'ajout des carrés et rectangles
    cout << "Apres l'ajout des carres et rectangles :" << endl;
    chain.afficherInfos();

    // Afficher le nombre de carrés et de rectangles dans la liste
    cout << "Nombre de carres dans la liste : " << chain.compterCarres() << endl;
    cout << "Nombre de rectangles dans la liste : " << chain.compterRectangles() << endl;

    // Libérer la mémoire
    Objet2D* temp = chain.getHead();
    while (temp != nullptr) {
        Objet2D* next = temp->getSuivant();
        delete temp;
        temp = next;
    }

    return 0;
}
