#include<iostream>
#define MAX_NUMBER 1000

/*EXERCICE 3.4
Créer un programme qui écrit la somme des multiples de 3 ou 5 inférieur à 1000.
Par exemple, la sommes des multiples de 3 ou 5 en dessous de 10, il y a 3, 5, 6, 9 et leur sommes est 23.
*/

int main() {

	int somme = 0;
	const int maxNumber = MAX_NUMBER;

	for (int i = 3; i < maxNumber; i++) {
		
		if (i % 3 == 0 || i % 5 == 0) {
			somme += i;
		}
	}

	std::cout << "La somme du multiple de 3 ou 5 est " << somme << "\n";

	system("pause");
	return EXIT_SUCCESS;
}


