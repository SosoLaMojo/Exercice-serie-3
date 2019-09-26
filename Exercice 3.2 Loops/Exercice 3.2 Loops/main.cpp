#include <iostream>


/* EXERCICE 3.2
Créer un programme qui demande à l’utilisateur d’entrer n et qui affiche n!
*/


int Fact(int n){

	if (n > 1) {
		return n * Fact(n - 1);
	}

	else {
		return 1;
	}

}

int main() {

	int n;

	std::cout << "Enter un entier \n";
	std::cin >> n;

	std::cout << "le resultat de " << n << " est : " << Fact (n) << "\n";

	system("pause");
	return EXIT_SUCCESS;
}