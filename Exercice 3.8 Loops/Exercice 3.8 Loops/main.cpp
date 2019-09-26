#include<iostream>
#define MAX_NUMBER 4000000;

/*EXERCICE 3.8
En considérant tous les termes de la suite de Fibonacci inférieur à 4’000’000, trouver la sommes des termes pair.
*/

int main() 
{
	const unsigned int maxNumber = MAX_NUMBER;
	unsigned int Fib1 = 0;
	unsigned int Fib2 = 1;
	unsigned int Somme = 0;
	unsigned int Fibn;

	for (int i = 1; i < maxNumber; i++) {

		Fibn = Fib1 + Fib2;

		if (Fibn % 2 == 0 ) {
			
			Somme += Fibn;

		}

		Fib1 = Fib2;
		Fib2 = Fibn;

	}


	std::cout << "La somme est: " << Somme << "\n";


	system("pause");
	return EXIT_SUCCESS;
}