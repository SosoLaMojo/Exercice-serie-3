#include <iostream>
#define MAX_NUMBER 5;

/*EXERCICE 3.0
Demander à l’utilisateur d’entrer 5 entier de donner lui la moyenne.
*/

int main() {
	
	float note;
	float somme = 0;
	const int maxNumber = MAX_NUMBER;

	for (int i = 0; i < maxNumber; i++) {
		std::cout << "Enter un entier " << i << "\n";
		std::cin >> note;

		somme = somme + note; // equivalent à somme += note;
	}

	float resultat = somme / MAX_NUMBER;

	std::cout << "Le resultat est : " << resultat << "\n";

	system("pause");
	return EXIT_SUCCESS;
}