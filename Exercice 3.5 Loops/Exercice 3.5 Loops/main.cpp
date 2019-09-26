#include <iostream>

/*EXERCICE 3.5
Ecrire un programme qui demande à l’utilisateur d’entrer n et qui ressort u(n) définis par:
u(0) = 3
u(n + 1) = 3 * u(n) + 4
*/

int u(int n) {
	
	int temp;

	if (n == 0) {
		temp = 3;
	}
	else {
		temp = 3 * u(n - 1) + 4;
	}

	return temp;
}

int main() {

	int n;
	int serie;

	std::cout << "Entrer un entier : \n";
	std::cin >> n;

	serie = u(n);

	std::cout << "L'entier vaut : " << serie << "\n";

	system("pause");
	return EXIT_SUCCESS;
}