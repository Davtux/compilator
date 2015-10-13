//Inclusions des bibliothèques :
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Inclusion des fichiers annexes :


//Déclaration des variables globales :
//#include "tables.c"

//table des correspondances
char tableCorrespondance[36];

//table lexicale
char tableLexicale[26][26];
//TODO

#include <tables.c>

int main(int argc, char *argv[])
{
    //Déclaration des variables :

    char *chaineActuelle;
    char caractereActuel;
    char caractereSuivant;
    char *tableauRenduFinal;
    int motReconnu = 0;
    int indexCaracActuel;

    //Vérification des arguments :

    if (argc < 2){
        printf("Il est nécessaire de fournir au moins un argument à ce programme.\n");
        exit(1);
    }

    //Initialisation des tables
    initialiserTableCorrespondance();

    //Initialisation du tableau de rendu
    tableauRenduFinal = "Ce n'est pas normal que ceci soit affiché";

    //Lecture des arguments
    for( int i = 1; i < argc; i++){
        chaineActuelle = argv[i];

        //Décomposition de l'argument caractère par caractère
        for( int j = 0; chaineActuelle[j] == '/0'; j++){
            caractereActuel = chaineActuelle[j];

            //On cherche à quelle ligne se trouve le caractère dans la table lexicale :
            for (indexCaracActuel = 0; caractereActuel == tableCorrespondance[indexCaracActuel] || indexCaracActuel > 26; indexCaracActuel++); //Cas de caractère non présent dans la table non géré !

            //recherche des caractères suivants possibles dans la table lexicale
            for(int colonne = 0; colonne < 26; colonne ++){
                if(tableLexicale[indexCaracActuel][colonne] == 1){

                    printf("TODO");
                    exit(0);
                }
            }
        }
        //on vérifie si le mot a été reconnu
        if(motReconnu != 0)
            //mot reconnu :
            // TODO : trouver un moyen de savoir de quel type est el mot : nombre, chaine de carac… (un case ?)
            tableauRenduFinal = strcat(tableauRenduFinal, "Type : ");
        else
            //mot inconnu
            tableauRenduFinal = strcat(tableauRenduFinal, "Inconnu : ");

        //on ajoute le mot à l'ffichage final
        tableauRenduFinal = strcat(tableauRenduFinal, chaineActuelle);
        tableauRenduFinal = strcat(tableauRenduFinal, '\n'); //On rajoute '\n' afin de ne pas avoir à gérer les retours à la ligne
    }
    printf('Voici les mots reconnus par le programme : \n \n');
    //printf("%c", &tableau);
    return 0;
}
