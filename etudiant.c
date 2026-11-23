
#include <stdio.h>
#include "etudiant.h"
#include "stats.h"

void afficher_etudiant(const Etudiant *e)
{
    int i;
    double moyenne;

    if (e == NULL) {
        return;
    }

    printf("\n========== FICHE ETUDIANT ==========\n");
   printf("Matricule : %d\n", e->id);
    printf("Nom       : %s\n", e->nom);

    printf("Notes     : ");
    for (i = 0; i < NB_NOTES_MAX; i++) {
        printf("%.2f ", e->notes[i]);
    }

    moyenne = calculer_moyenne(e->notes, NB_NOTES_MAX);

    printf("\nMoyenne   : %.2f\n", moyenne);
    printf("Mention   : %s\n", determiner_mention(moyenne));

    printf("====================================\n");
}
