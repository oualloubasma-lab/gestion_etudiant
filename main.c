#include "etudiant.h"

int main(void) {
    Etudiant e1 = {
        .id = 101,
        .nom = "Salma Bennani",
        .notes = {16.5, 15.0, 17.0, 16.0}
    };

    Etudiant e2 = {
        .id = 102,
        .nom = "Youssef El Amrani",
        .notes = {9.5, 11.0, 8.5, 10.0}
    };

    afficher_etudiant(&e1);
    afficher_etudiant(&e2);

    return 0;
}