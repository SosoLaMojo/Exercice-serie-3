#include<iostream>

/* EXERCICE 3.1
Écrire un programme qui demande à l’utilisateur d’entrer un entier et qui indique si c’est un nombre premier ou pas.
*/
												
int main(){

	int entier;
	bool nbrPremier = true;
	
	std::cout << "Entrer un entier: \n";
	std::cin >> entier;

	for (int i = 2 ; i <= entier / 2; ++i) {

		if (entier % i == 0) {
			nbrPremier = false;
			break;
		}

	}

	if (nbrPremier) {
		std::cout << "C'est un nombre premier \n";
	}

	else {
		std::cout << "Ce n'est pas un nombre premier \n";
	}

	system("pause");
	return EXIT_SUCCESS;
	}

