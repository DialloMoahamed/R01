# 🧮 Calculatrice en ligne de commande en C

Ce programme est une calculatrice simple écrite en langage C. Il permet à l'utilisateur d'effectuer des **opérations arithmétiques de base** : addition, soustraction, multiplication, division et modulo.

---

## ⚙️ Fonctionnalités

- Addition (`+`)
- Soustraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulo (`%`)
- Vérification d'erreurs :
  - Format invalide
  - Division par zéro
  - Tentative de soustraction avec zéro en minuend

---

## 💻 Utilisation

### 🔧 Compilation

* Utilisez `gcc` pour compiler le programme :

- gcc -o calculatrice calculatrice.c 
* ▶️ Exécution
- ./calculatrice
* Le programme demandera ensuite une opération à saisir sous la forme :

- Entrez votre opération : 12 + 8


# 💡 Exemple de sortie

Entrez votre opération : 10 / 2
La division entre 10 et 2 = 5


# 🛑 Erreurs prises en compte

* Division par zéro :

Entrez votre opération : 10 / 0
Erreur : Division par 0 imprudent.

* Format incorrect :

Entrez votre opération : dix + cinq
Erreur : format invalide.

* Soustraction avec 0 en premier opérande :

Entrez votre opération : 0 - 5
On ne peut pas soustraire un nombre de 0.


# 📁 Fichier source
calculatrice.c : code source principal de l'application.

# 🛠 Dépendances
- stdio.h

- stdlib.h

- math.h