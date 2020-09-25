#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	float A = 200.0;//on initialise les variables à des valeurs non conformes
	float B = 200.0;
	float C = 200.0;
	int volonte = 1;
	float stockage_temporaire;


	while (volonte == 1) {
		while ((A > 150.0) || (B > 150.0) || (C > 150.0)) {
			printf("Entrer la valeur de la longueur de la valise\n");//longueur, largeur ou hauteur
			scanf_s("%f", &A);
			printf("Entrer la valeur de la largeur de la valise\n");
			scanf_s("%f", &B);
			printf("Entrer la valeur de la hauteur de la valise\n");
			scanf_s("%f", &C);
		}
		if (B < A) {//on classe ici les variables par ordre croissant
			stockage_temporaire = A;
			A = B;
			B = stockage_temporaire;}
		if (C < A) {
			stockage_temporaire = A;
			A = C;
			C = stockage_temporaire;}
		if (C < B) {
			stockage_temporaire = B;
			B = C;
			C = stockage_temporaire;}

		//validation selon la conformité du colis
		if ((A  > 55.0) || (B  > 35.0) || (C  > 55.0)) {
			printf("Colis Invalide\n");}
		else {
			printf("colis valide"); }


		//partie pour recommencer
		volonte = 0;
		printf("Si vous voulez tester un nouveau colis, tapez 1, sinon tapez 0");
		//on assume ici que l'utilisateur entre une valeur adéquate
		scanf_s("%d", &volonte);
		A,B,C = 200;
	
	}

	return 0;
}