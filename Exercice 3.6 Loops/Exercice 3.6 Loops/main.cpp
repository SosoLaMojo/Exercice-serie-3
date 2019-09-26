#include <iostream>

/* EXERCICE 3.6
Créer un programme qui contient une fonction qui s’appel fib, qui prend en paramètre n et retourne le nième terme de fibonacci en commençant par 0 et 1.
Le programme doit demander à l’utilisateur d’entrer un entier et sortir la valeur de fibonacci.
*/



int fib(int n) {

	int fibonacci;

	if (n == 1) {

		fibonacci = 0;
	}

	else if (n == 2){

		fibonacci = 1;

	}

	else {

		fibonacci = fib(n - 1) + fib(n - 2);

	}
	return fibonacci;
}


int main() 
{

	int n;
	int calcul;

	std::cout << "Entrer le nombre de termes de fibonacci: \n";
	std::cin >> n;

	calcul = fib(n);
	std::cout << "Le terme" << n << " de fibonacci est: " << calcul << "\n";

	system("pause");
	return EXIT_SUCCESS;
}