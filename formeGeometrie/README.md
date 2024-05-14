Après avoir créé une programmation orientée qui permet d'afficher la surface et l'aire de différentes formes géométriques comme le triangle, le rectangle, etc., nous avons créé une bibliothèque statique et dynamique. Voici les avantages de ces bibliothèques :

Pour la bibliothèque statique :

    Intégration directe : Les fichiers objets de la bibliothèque sont directement liés au programme, ce qui signifie que le code de la bibliothèque est inclus dans le binaire final de votre programme. Cela rend le programme plus gros, mais il est entièrement autonome et n'a pas besoin de fichiers supplémentaires pour fonctionner.
    Facilité d'utilisation : Une fois que la bibliothèque est liée de manière statique, elle est intégrée au programme, et on n'a pas besoin de gérer des dépendances externes à l'exécution.
    Portabilité : Les bibliothèques statiques peuvent rendre le programme moins portable entre différentes architectures ou systèmes d'exploitation, car le code de la bibliothèque doit être compilé spécifiquement pour chaque cible.

Voici les étapes que nous avons suivi pour exécuter les commandes suivantes :

    g++ -c *.cpp (qui permet d'exécuter tout le fichier.cpp)
    ar -rv libgeometrie.a fich.o (regrouper le fichier.o)
    g++ main.cpp -L(path) -lgeometrie -o exam.out (qui permet de créer une bibliothèque statique nommée "geometrique" et on obtient le fichier exécutable exam.out)
    On peut exécuter le fichier exécutable par ./exam.out.

Pour la bibliothèque dynamique :

    Modularité : Les fichiers objets de la bibliothèque sont chargés à l'exécution du programme. Cela signifie que le code de la bibliothèque reste séparé du binaire final de votre programme, ce qui permet une plus grande flexibilité et modularité.
    Partage des ressources : Une même copie de la bibliothèque peut être utilisée par de nombreux programmes, ce qui peut réduire la taille du binaire final de chaque programme individuel.
    Facilité de mise à jour : Les bibliothèques dynamiques peuvent être mises à jour indépendamment des programmes qui les utilisent, sans nécessiter de recompilation de ces programmes.
    Portabilité : Les bibliothèques dynamiques peuvent être plus portables, car elles peuvent être compilées une fois et utilisées sur différentes architectures ou systèmes d'exploitation, tant que les fichiers de la bibliothèque sont disponibles.

Voici les étapes pour créer une bibliothèque dynamique :

    g++ -fPIC -c fich.cpp (pour obtenir le fichier point.o)
    g++ -o libgeometrie.so -shared fich.o
    Changer le répertoire dans /etc/ld.so.conf.d
    Créer un fichier "libgeometry.conf" et écrire le chemin du répertoire parent de la bibliothèque dynamique.
    Exécuter la commande ldconfig
    g++ main.cpp -L/chemin du répertoire parent -lgeometry main.exe

