# Gestion de Personnes avec C

Ce projet est un programme en C qui permet de gérer une liste de personnes. Les utilisateurs peuvent ajouter, afficher, modifier et supprimer des entrées dans une liste de personnes, qui inclut des informations personnelles telles que le nom, l'âge et l'adresse. Le programme utilise des structures pour organiser les données et un menu interactif pour naviguer dans les différentes fonctionnalités.

---

## Table des matières

1. [Fonctionnalités](#fonctionnalités)
2. [Structure du Code](#structure-du-code)
3. [Comment Utiliser](#comment-utiliser)
4. [Exemples](#exemples)
5. [Limitations](#limitations)
6. [Améliorations Possibles](#améliorations-possibles)

---

## Fonctionnalités

- **Ajouter une personne :** Permet d'ajouter une personne avec son nom, son âge, et son adresse (rue, ville, code postal).
- **Afficher les personnes :** Affiche toutes les personnes enregistrées dans le système.
- **Modifier une personne :** Met à jour les informations d'une personne existante.
- **Supprimer une personne :** Supprime une personne de la liste.
- **Menu interactif :** Fournit un menu facile à utiliser pour naviguer entre les options.

---

## Structure du Code

- **Structure `Personne` :**
  - Contient les informations de base telles que le nom, l'âge, et une sous-structure `Adresse`.
  
- **Fonctions principales :**
  - `ajouter_personne` : Ajoute une nouvelle personne.
  - `afficher_personnes` : Affiche toutes les personnes de la liste.
  - `modifier_personne` : Modifie les données d'une personne.
  - `supprimer_personne` : Supprime une personne de la liste.
  - `main` : Fournit un menu interactif pour utiliser le programme.

---

## Comment Utiliser

1. **Compiler le programme :**
   Assurez-vous d'avoir un compilateur C (comme GCC) installé. Compilez le programme avec :
   ```bash
   gcc -o gestion_personnes gestion_personnes.c
   ```

2. **Exécuter le programme :**
   Lancez le programme avec :
   ```bash
   ./gestion_personnes
   ```

3. **Naviguer dans le menu :**
   - Choisissez une option parmi celles affichées dans le menu.
   - Entrez les informations demandées en suivant les instructions.

---

## Exemples

### Ajouter une personne :
- Entrez le nom : `Jean Dupont`
- Entrez l'âge : `35`
- Entrez la rue : `123 Rue Principale`
- Entrez la ville : `Paris`
- Entrez le code postal : `75001`

### Afficher les personnes :
Le programme affichera toutes les entrées comme suit :
```
Personne 1:
Nom: Jean Dupont
Age: 35
Adresse: 123 Rue Principale, Paris, 75001
```

### Modifier une personne :
- Sélectionnez le numéro de la personne à modifier.
- Entrez les nouvelles informations.

---

## Limitations

1. **Nombre limité de personnes :** La liste peut stocker jusqu'à 100 personnes.
2. **Gestion de mémoire :** Les données sont stockées dans un tableau statique, ce qui limite la flexibilité.
3. **Entrée non valide :** Une gestion limitée des erreurs pour les entrées non valides.

---

## Améliorations Possibles

1. **Utiliser la mémoire dynamique :** Passer à une allocation dynamique avec `malloc` pour rendre le programme plus flexible.
2. **Validation des entrées :** Ajouter une vérification pour les données incorrectes ou manquantes.
3. **Sauvegarde des données :** Permettre la sauvegarde et le chargement des données depuis un fichier.
4. **Amélioration de l'interface utilisateur :** Intégrer des menus plus conviviaux avec des instructions claires.

---

## Contribution

Si vous avez des suggestions ou souhaitez améliorer ce projet, n'hésitez pas à créer une *issue* ou à soumettre une *pull request* sur ce dépôt.

---

## Licence

Ce projet est sous licence MIT. Vous êtes libre de l'utiliser, de le modifier et de le redistribuer, à condition de mentionner l'auteur original.
