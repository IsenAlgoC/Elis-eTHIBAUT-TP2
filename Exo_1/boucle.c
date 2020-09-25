#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	//trouver la somme
	unsigned short int sum = 00;
	int  n;

	printf("Entrer la valeur de n pour faire la somme des entiers jusque n");
	scanf_s("%d", &n);

	printf("n= %d", n);

	while (n > 363) {
		printf("Valeur trop haute, veuillez inserer une valeur de n inferieure a 364\n");
		scanf_s("%d", &n);
	}

	if (n <= 363) {
	
		for (int i = 2; i < n + 1; i++) {
		sum = sum + i;
		}
	}

	printf("\nla somme est: %d \npour une valeur de n egale a %hu \n", sum, n);
	//unsigned short int is stored on 2 bytes, so the max value of sum is 65, 535 which is 2**16 - 1
	printf("\n\n\n\n");
	



	//n sans depassement de capacité
	sum = 0;
	unsigned short int i = 0;

	while (65365 - sum > 0) {
		sum = sum + i;
		i = i + 1;
	}
	printf("la valeur de i maximale pour ne pas depasser est: %ud", i);


	printf("\n\n\n\n");



	return 0;
}