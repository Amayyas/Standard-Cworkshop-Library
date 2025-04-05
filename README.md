# Standard Cworkshop Library

## Description
Standard Cworkshop Library est une implémentation personnalisée des fonctions de la bibliothèque standard C. Ce projet a pour but de recréer les fonctions les plus utilisées des bibliothèques standards du langage C, offrant une alternative aux bibliothèques système.

## Fonctionnalités
Cette bibliothèque réimplémente les catégories de fonctions suivantes :
- Manipulation de chaînes de caractères (strcat, strcmp, strcpy, strlen, etc.)
- Manipulation de mémoire (memcpy, memset, memmove, etc.)
- Fonctions mathématiques (sin, cos, sqrt, abs, etc.)
- Entrées/Sorties (putchar, puts, fgetc, etc.)
- Conversion de types (atoi, atof, strtol, etc.)
- Classification de caractères (isalpha, isdigit, tolower, etc.)
- Et bien d'autres...

## Structure du projet
```
.
├── include/
│   └── my.h          # Fichier d'en-tête contenant toutes les déclarations de fonctions
├── lib/              # Répertoire contenant les implémentations des fonctions
│   └── *.c           # Fichiers source implémentant chaque fonction
├── main.c            # Fichier principal pour tester la bibliothèque
├── Makefile          # Script de compilation
└── README.md         # Ce fichier
```

## Compilation
Pour compiler la bibliothèque, utilisez la commande suivante :
```bash
make
```

Pour nettoyer les fichiers objets :
```bash
make clean
```

Pour supprimer tous les fichiers générés (objets et exécutable) :
```bash
make fclean
```

Pour recompiler entièrement le projet :
```bash
make re
```

## Utilisation
Incluez le fichier d'en-tête `my.h` dans votre projet et liez votre programme avec la bibliothèque compilée.

Exemple :
```c
#include "include/my.h"

int main(void)
{
    char *str = "Hello, world!";
    my_write(1, str, my_strlen(str));
    return 0;
}
```
