# 🧮 Menu Interactif en C

Ce programme en langage C propose un menu interactif qui regroupe plusieurs outils algorithmiques simples, utiles pour l'apprentissage des bases en programmation : conditions, boucles, arithmétique, manipulation de répertoires, etc.

Chaque fonctionnalité a été réalisée par un membre différent du groupe.

# 🔹 Fonctions proposées
1. 🧠 Calculatrice — par Zabeirou Yacouba
Permet d’effectuer des opérations arithmétiques simples :
Addition, Soustraction, Multiplication, Division, Modulo.

2. 🔢 Vérification de nombre premier — par Idrissa
Vérifie si un entier est un nombre premier (divisible uniquement par 1 et lui-même).

3. 🔁 Génération de la suite de Fibonacci — par Attahir
Affiche les n premiers termes de la suite de Fibonacci :
0 1 1 2 3 5 8 13 ...

4. 🔀 Vérification pair/impair — par Bouba
Indique si un entier est pair ou impair.

5. 📁 Nombre de fichiers dans un répertoire — par Omar
Demande le chemin d’un répertoire et affiche le nombre de fichiers réguliers qu’il contient (exclut les dossiers).

0. 🚪 Quitter
Quitte proprement le programme.

# ⚙️ Compilation
Utilisez gcc pour compiler le fichier source :

gcc -o menu menu.c
Cela crée un exécutable nommé menu.

# 💻 Utilisation
Lancez le programme :

./menu
Choisissez une option du menu en entrant un chiffre.

# 📌 Exemple d’exécution

$ ./menu

--- MENU ---
1. Calculatrice
2. Vérification de nombre premier
3. Génération de suite de Fibonacci
4. Vérification de nombre paire ou impaire
5. Vérification du nombre de fichier dans un repertoire
0. Quitter
Votre choix : 3

--- Génération de suite de Fibonacci ---
Entrez le nombre de termes :
6
Les 6 premiers termes de la série de Fibonacci sont :
0 1 1 2 3 5

👥 Auteurs

Fonction	                                                                              Auteur

Calculatrice	                                                                      Zabeirou Yacouba
Nombre premier	                                                                        Idrissa
Suite de Fibonacci	                                                                    Attahir
Pair ou impair	                                                                         Bouba
Nombre de fichiers	                                                                      Omar