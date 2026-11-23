#include <stddef.h>
#include "stats.h"

double calculer_moyenne(const double *notes, int n) {
    if (notes == NULL || n <= 0) {
        return 0.0;
    }

    double somme = 0.0;
    for (int i = 0; i < n; i++) {
        somme += notes[i];
    }
    return somme / n;
}

const char* determiner_mention(double moyenne) {
    if (moyenne >= 16.0) {
        return "Admis avec Mention Tres Bien";
    } else if (moyenne >= 14.0) {
        return "Bien";
    } else if (moyenne >= 12.0) {
        return "Assez Bien";
    } else if (moyenne >= 10.0) {
        return "Passable";
    } else {
        return "Ajourne";
    }
}