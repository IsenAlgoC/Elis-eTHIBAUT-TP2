#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {
	int annee = -5;

	while ((annee < 0) || (annee > 10000)) {
		printf("Entrer la valeur de l'annee\n");
		scanf_s("%d", &annee);
	}

	if (((annee % 400 == 0)) || ((annee % 4 == 0) && (annee % 100 != 0))){
		printf("annee bissextile"); 
	}
	
	else {
		printf("annee non bissextile");
	}


	if (annee % 4 == 0) {
		if (annee % 100 == 0) {
			if (annee % 400 == 00) {
				printf("Annee bissextile");
			}
			else {
				printf("Anne non bissextile");
			}
		}
		else {
			printf("annee bissextile");
		}
	}
	else {
		printf("annee non bissextile");
	}
	return 0;
}
