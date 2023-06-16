//desenho maluko
//codigo do guilherme monitoria
#include <stdio.h>

int main() {

	int x, i, j, cA, fA; // cA -> começo dos asteriscos
						 // fA -> fim dos asteriscos

	do {
		printf("ENTRADA:\n");
		scanf("%d", &x);
		printf("SAIDA:\n");
		if (x % 2 == 0) {
			printf("Valor invalido, digite novamente.");
		}
	} while (x % 2 == 0 || x <= 0);

	i = 0;
	cA = x/2;
	fA = cA;
	while (i < x) {
		j = 0;
		while (j <= fA) {
			if (j < cA) {
				printf("  ");
			} else {
				printf("* ");
			}
			j++;
		}

		if (i < x/2) {
			cA--;
			fA++;
		} else {
			cA++;
			fA--;
		}
		printf("\n");
		i++;
	}

	return 0;
}

//   0 1 2 3 4 5 6
// 0 - - - * - - -
// 1 - - * * * - -
// 2 - * * * * * -
// 3 * * * * * * *
// 4 - * * * * * -
// 5 - - * * * - -
// 6 - - - * - - -