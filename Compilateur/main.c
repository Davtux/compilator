//Inclusions des bibliothèques :
#include <stdio.h>

//Inclusion des fichiers annexes :


//Déclaration des variables globales :

//Mise en place de la table lexicale :
char tableLexicale[26][26];
//TODO




int main(int argc, char *argv[])
{
    //Déclaration des variables :

    char *chaineActuelle[];
    char caractereActuel;
    char caractereSuivant;
    // char tableLexicale[26][26];
    char *tableauRenduFinal[];

    int motReconnu = 0;


    //Vérification des arguments :

    if (argc < 2){
        printf("Il est nécessaire de fournir au moins un argument à ce programme.");
        exit(1);
    }

    //Lecture des arguments
    for(int i = 1; i < argc; i++){
        chaineActuelle = argv[i];

        //Décomposition de l'argument caractère par caractère
        for(int j = 0; chaineActuelle[j] != '/0'; j++){
            caractereActuel = chaineActuelle[j];

            //recherche des caractères suivants possibles dans la table lexicale
            for(int ligne = 0; ligne < 26; ligne ++){
                for(int colonne = 0; colonne < 26; colonne ++){
                        printf("TODO");
                        exit(0);
                    }
                }
            }
        if(motReconnu != 0)
            tableauRenduFinal += chaineActuelle + '\n'; // +'\n' pour effectuer un retour à la ligne automatique

    }
    printf("Voici ler mots reconnus par le programme : \n \n");
    printf("%c",tableauRenduFinal[j]);

    exit(0);
}

