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
        printf("Personne ajoute avec succes !\n");
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
    printf("Enterz le numero de la personne a modifier (1-%d) : ",nombre_personnes);
    scanf("%d",&index);

    if (index >= 1 && index <= nombre_personnes)
    {
        index--;
        printf("Entrez le nouveau nom : ");
        scanf(" %[^\n]",liste_personnes[index].nom);
        printf("Entrez le nouveau age : ");
        scanf("%d",&liste_personnes[index].age);
        printf("Entrez le nouveau rue : ");
        scanf(" %[^\n]",liste_personnes[index].adresse->rue);
        printf("Entrez le nouveau ville : ");
        scanf(" %[^\n]",liste_personnes[index].adresse->ville);
        printf("Entrez le nouveau Code Postal : ");
        scanf(" %[^\n]",liste_personnes[index].adresse->code_postal);

   printf("Personne modifee avec succes \n");

    } else {
        printf("Numero invalide .\n");

    }
    

}

void supprimer_personne(){   
     int index;
        printf("Entrez le numéro de la personne à supprimer (1-%d): ", nombre_personnes);
            scanf("%d", &index);
     if (index >= 1 && index <= nombre_personnes){
        index--;
    

     for (int i = index ; i < nombre_personnes - 1; i++){
          liste_personnes[i] = liste_personnes[i + 1];
     }
      nombre_personnes--;
     printf("Personne supprimee avec succes");
    
    }else{
        printf("Numero invalide . \n");
    }

 }

// Fonction principale
int main() {
    ajouter_personne();
    afficher_personnes();
    modifier_personne();
    afficher_personnes();
    supprimer_personne();

    return 0;
}
