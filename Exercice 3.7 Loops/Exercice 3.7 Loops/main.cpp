#include<iostream>
#define MAX_NUMBER 1000;

/* EXERCICE 3.7
Exercice 3.4 Créer un programme qui écrit la somme des multiples de 3 ou 5 inférieur à 1000.
Par exemple, la sommes des multiples de 3 ou 5 en dessous de 10, il y a 3, 5, 6, 9 et leur sommes est 23.
Même exercice que le 3.4 sans passer par des loops (for, while et do-while).
*/

int multiple(int test) {

	const int maxNumber = MAX_NUMBER;
	int somme = 0;

	if (test < maxNumber) {

		if (test % 3 == 0 || test % 5 == 0) {
			somme += test;
			somme += multiple(++test);
		}

		else {
			somme += multiple(++test);
		}

	}

	return somme;

}

int main() {

	int somme;
	int test = 0;

	somme = multiple(test);

	std::cout << "La somme du multiple de 3 ou 5 est " << somme << "\n";

	system("pause");
	return EXIT_SUCCESS;
}