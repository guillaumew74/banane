#include "donnees.h"

void lectureFichier(char** lignesFichier) //void à modifier
{
	FILE* csv = NULL;
	char str[TAILLE]; // Pour enregister une chaîne de caractères
	int i = 0;

	csv = fopen("donnees.csv","r");
	
	if (csv == NULL) // Vérification de l'ouverture du fichier
	{
		printf("Le fichier ne s'est pas ouvert\n");
		exit(-1);
	}

	while (fgets(str, TAILLE, csv) != NULL)
	{
		lignesFichier[i]=malloc(sizeof(char)*(strlen(str)));

		if (str[strlen(str)-1] =='\n')
		{
			str[strlen(str)-1] ='\0';
		}

		strcpy(lignesFichier[i],str)
		printf("%s\n", lignesFichier[i]);
		i++;
	}
	fclose(csv);

	return 0; // valeur du return à modifier
}