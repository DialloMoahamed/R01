//Les bibliothèque
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
    int choix;

        // Affichage du menu
        printf("\n--- MENU ---\n");
        printf("1. Calculatrice\n");
        printf("2. Vérification de nombre premier\n");
        printf("3. Génération de suite de Fibonacci\n");
        printf("4. Vérification de nombre paire ou impaire\n");
        printf("5. Vérification du nombre de fichier dans un repertoire\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        // Traitement du choix
        // Ce script est une calculatrice simple qui permet à l'utilisateur d'effectuer des opérations arithmétiques de base : addition, soustraction, multiplication, division et modulo.
        if (choix == 1)
        {
            printf("\n--- Calculatrice ---\n");

            double a, b, resultat;   // Déclaration des deux opérandes et du résultat
            char operateur;          // Variable pour stocker l'opérateur (+, -, *, /, %)

            // Demande à l'utilisateur de saisir une expression
            printf("\n");
            printf("Saisissez le calcul a effectuer : ");
            scanf("%lf %c %lf", &a, &operateur, &b);  // Lit un nombre, un caractère, puis un autre nombre

            printf("\n--- Étapes du calcul ---\n");
            printf("\n");
            // Effectue le calcul en fonction de l'opérateur
            switch (operateur) {
                case '+':
                    printf("Étape : on additionne %.2lf + %.2lf\n", a, b);
                    resultat = a + b;
                    break;
                case '-':
                    printf("Étape : on soustrait %.2lf - %.2lf\n", a, b);
                    resultat = a - b;
                    break;
                case '*':
                    printf("Étape : on multiplie %.2lf * %.2lf\n", a, b);
                    resultat = a * b;
                    break;
                case '/':
                    // Vérifie si division par zéro
                    if (b == 0) {
                        printf("Erreur : division par zéro interdite.\n");
                        return 0;  // Quitte la fonction
                    }
                    printf("Étape : on divise %.2lf / %.2lf\n", a, b);
                    resultat = a / b;
                    break;
                case '%':
                    // Vérifie si b est nul pour le modulo
                    if ((int)b == 0) {
                        printf("Erreur : division entière par zéro interdite.\n");
                        return 0;
                    }
                    printf("Étape : on calcule le modulo %d %% %d\n", (int)a, (int)b);
                    resultat = (int)a % (int)b;  // Modulo utilise des entiers
                    break;
                default:
                    // Cas où l'opérateur est inconnu
                    printf("Erreur : opérateur inconnu '%c'\n", operateur);
                    return 0;
            }

            // Affiche le résultat final
            printf("\n");
            printf("Résultat final : %.2lf\n", resultat);
        } 


        // Ce script permet la vérification de nombre premier
        else if (choix == 2)
        {
            printf("\n--- Vérification de nombre premier ---\n");

            int nombre, i, nbr_premier = 1; // On suppose que le nombre est premier

            printf("Entrez un nombre entier : ");
            scanf("%d", &nombre);

            if (nombre <= 1) {
                nbr_premier = 0; // 0 et 1 ne sont pas premiers
            } else {
                for (i = 2; i < nombre; i++) {
                    if (nombre % i == 0) {
                        nbr_premier = 0; // TrouvÃ© un diviseur, donc pas premier
                        break;
                    }
                }
            }

            if (nbr_premier) {
                printf("%d est un nombre premier.\n", nombre);
            } else {
                printf("%d n'est pas un nombre premier.\n", nombre);
            }
        }


        // Ce script permet la génération de la suite de Fibonacci
        else if (choix == 3)
        {
            printf("\n--- Génération de suite de Fibonacci ---\n");
            // Déclaration des variable
            int n, nbr1 = 0, nbr2 = 1, suivant, i;

            // On demande à l'utilisateure d'entrer le nombre de termes
            printf("Entrez le nombre de termes :\n");
            scanf("%d", &n);

            // Affichage des termes de la série de Fibonacci
            printf("Les %d premiers termes de la série de Fibonacci sont:\n", n);
                
            for (i = 0; i < n; i++)
            {
                if (i <= 1)
                suivant = i;
                else
                {
                suivant = nbr1 + nbr2;
                nbr1 = nbr2;
                nbr2 = suivant;
                }
                printf("%d ", suivant);
                }
        }


        // Ce script permet la vérification d'un nombre paire ou impaire
        else if (choix == 4)
        {
            printf("\n--- Vérification de nombre paire ou impaire ---\n");

            int a;
            printf("Entrez un entier : ");
            scanf("%d", &a);

            if (a % 2 == 0)
            {
                printf("Le nombre %d est paire.\n", a);
            }
            else
            {
                printf("Le nombre %d est impaire.\n", a);
            }
        }


        // Ce script permet la vérification du nombre de fichier dans un repertoire
        else if (choix == 5)
        {
            printf("\n--- Vérification du nombre de fichier dans un repertoire ---\n");

            char dirname[256];

            // Récupération du nom du répertoire
            printf("Entrez le nom du répertoire : ");
            if (scanf("%255s", dirname) != 1) {
                fprintf(stderr, "Erreur de lecture de l'entrée.\n");
                return EXIT_FAILURE;
            }

            // Ouverture du répertoire
            DIR *dir = opendir(dirname);
            if (dir == NULL) {
                perror("Erreur lors de l'ouverture du répertoire");
                return EXIT_FAILURE;
            }

            struct dirent *entry;
            struct stat fileStat;
            char path[512];
            int file_count = 0;

            // Parcours des entrées du répertoire
            while ((entry = readdir(dir)) != NULL) {
                // Construction du chemin complet
                snprintf(path, sizeof(path), "%s/%s", dirname, entry->d_name);

                // Vérifie que c'est un fichier régulier (et non un dossier, etc.)
                if (stat(path, &fileStat) == 0 && S_ISREG(fileStat.st_mode)) {
                    file_count++;
                }
            }

            // Fermeture du répertoire
            closedir(dir);

            // Affichage du résultat
            printf("Le répertoire \"%s\" contient %d fichier(s).\n", dirname, file_count);

            return EXIT_SUCCESS;
        }


        // Ce script permet de sortir du menu
        else if (choix == 0)
        {
            printf("Au revoir !");
            return 0;
        }


        // Ce script permet de dire à l'utilisateure que son choix est invalide
        else
        {
            printf("Votre choix ne fait pas partie de notre menu.\n");
        }
        
    return 0;
}
