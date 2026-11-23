#ifndef ETUDIANT_H
#define ETUDIANT_H

#define NB_NOTES_MAX 4

typedef struct {
    int id;
    char nom[32];
    double notes[NB_NOTES_MAX];
} Etudiant;

void afficher_etudiant(const Etudiant *e);

#endif /* ETUDIANT_H */