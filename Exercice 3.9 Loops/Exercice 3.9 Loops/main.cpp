#include <iostream>

/* EXERCICE 3.9
Résoudre le problème de la tour de hanoi.
Pour la solution vous pouvez afficher dans la console, “Disque A vers B”
*/



void tourHanoi (int n, char tourDepart, char tourArrivee, char tourIntermediaire)
{
	if (n == 1)
	{
		
		std::cout << " Bouger le disque " << n << " de " << tourDepart << " a " << tourArrivee << "\n";
		return;
	}
	
	tourHanoi (n - 1, tourDepart, tourIntermediaire, tourArrivee);

	std::cout << " Bouger le disque " << n << " de " << tourDepart << " a " << tourArrivee << "\n";

	tourHanoi (n - 1, tourIntermediaire, tourArrivee, tourDepart);
}


int main()
{
	int n;

	std::cout << "Entrer le nombre de disques: \n";
	std::cin >> n;

	tourHanoi (n, 'A', 'C', 'B');
	
	
	system("pause");
	return EXIT_SUCCESS;
}