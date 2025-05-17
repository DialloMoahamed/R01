#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Description : Ce script agit comme une calculatrice en ligne de commande.
// Il permet d'effectuer des opérations arithmétiques simples (+, -, *, /, %).
// ===========================

int main(int argc, char const *argv[])
{
    // Initialisation des variables
    int a, b,resultat;
    char op;

    // Le programme demande à l'utilisateure d'entrez son opération
    printf("Entrez votre opération : ");

    // Format invalide
    if (scanf("%d %s %d", &a, &op, &b) != 3) {
        printf("Erreur : format invalide.\n");
        return 1;
    }

    // Addition (`+`)
    if (op == '+')
    {
        resultat = a + b;
        printf("La somme de %d et %d = %d",a, b, resultat);
    }

    // Soustraction (`-`)
    else if (op == '-')
    {
        // Tentative de soustraction avec zéro en minuend
        if (a == 0)
        {
            printf("On ne peut pas soustraire un nombre de 0.\n");
            return 0;
        }
        
        resultat = a - b;
        printf("La différence entre %d et %d = %d", a ,b ,resultat);
    }

    // Multiplication (`*`)
    else if (op == '*')
    {
        resultat = a * b;
        printf("Le produit de %d et %d = %d", a ,b ,resultat);
    }

    // Division (`/`)
    else if (op == '/')
    {
        // Division par zéro
        if (b == 0)
        {
            printf("Erreur : Division par 0 imprudent.");
            return 1;
        }
        
        resultat = a / b;
        printf("La division entre %d et %d = %d", a, b, resultat);
        
    }
    // Modulo (`%`)
    else
    {
        resultat = a % b;
        printf("Le reste de la division entre %d et %d = %d", a, b, resultat);
    }
    
    // Sortie du script
    return 0;
}
