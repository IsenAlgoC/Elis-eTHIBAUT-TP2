#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main() {
	time_t t;
	srand((int)time(&t));
	int crashtest = rand() % 800;//celle là sert à génerer des nombres plus aléatoires, pour augmenter les vhances d'avoir un nombre bien aléatoire
	int random = rand()%800;//on genere un nombre entre 0 et un nombre prealablement choisi
	printf("%d", random);
	int usernbr = 0;
	int counter = 0;
	printf("\nentrez un nombre entre 0 et 800   ");// on assume un bon play du joueur
	scanf_s("%d", &usernbr);

	while (usernbr != random) {
		if (usernbr > random) {
			printf("\ntrop grand");
		}
		else if (usernbr < random) {
			printf("\ntrop petit");
		}
		printf("\nentrez un nombre entre 0 et 800   ");// on assume un bon play du joueur
		scanf_s("%d", &usernbr);
		counter++;
	}
	printf("\n\ngagne, tu as utilise %d coups", counter);
	return 0;
}