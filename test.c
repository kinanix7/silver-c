#include <stdio.h>
#include <string.h>

// Structure Personne est Structure Adresse
struct Personne {
    char nom[50];
    int age;

struct Adresse {
    char rue[100];
    char ville[50];
    char code_postal[10];
}adresse[3];
};

// Déclaration globale
struct Personne liste_personnes[100]; // Tableau pour stocker les personnes
int nombre_personnes = 0;             // Compteur du nombre de personnes

// Fonction pour ajouter une personne
void ajouter_personne() {
    if (nombre_personnes < 100) {
        printf("Entrez le nom de la personne: ");
        scanf(" %[^\n]", liste_personnes[nombre_personnes].nom);

        printf("Entrez l'age de la personne: ");
        scanf("%d", &liste_personnes[nombre_personnes].age);

        printf("Entrez la rue: ");
        scanf(" %[^\n]", liste_personnes[nombre_personnes].adresse->rue);

        printf("Entrez la ville: ");
        scanf(" %[^\n]", liste_personnes[nombre_personnes].adresse->ville);

        printf("Entrez le code postal: ");
        scanf(" %[^\n]", liste_personnes[nombre_personnes].adresse->code_postal);

        nombre_personnes++; // Incrémenter le compteur
        printf("Personne ajoutée avec succès !\n");
    } else {
        printf("Le tableau est plein.\n");
    }
}

void afficher_personnes(){
    if (nombre_personnes == 0 )
    {
       printf("Aucune presonnes a afficher .\n");
       return;
    }
    for (int i = 0; i < nombre_personnes; i++)
    {
        printf("\nPersonne %d:\n", i + 1);
        printf("Nom: %s\n", liste_personnes[i].nom);
        printf("Age: %d\n", liste_personnes[i].age);
        printf("Adresse: %s, %s, %s\n", liste_personnes[i].adresse->rue,
                                         liste_personnes[i].adresse->ville,
                                         liste_personnes[i].adresse->code_postal);
    }
    }



void modifier_personne(){
    int index ;
}
// Fonction principale
int main() {
    ajouter_personne();
    afficher_personnes();
    return 0;
}
