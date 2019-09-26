#include <iostream>

/*EXERCICE 3.3
3.3 - Exercice
�crire un programme qui permet de faire des op�rations sur un entier.
Pour donner le choix de l�op�ration � l�utilisateur il faut �crire � l��cran
Additionner : 1
Soustraire : 2
Multiplier : 3
Diviser : 4
Quitter : 5
Ensuite selon le choix de l�utilisateur appliquer l�op�ration d�sir�e.
Ce programme doit utiliser une structure if/else.
*/



int Addition(int Nbr1, int Nbr2) //Calcul de l'addition (num�ro 1)
{
	int Resultat = Nbr1 + Nbr2;
	return Resultat;
}

int Soustraction(int Nbr1, int Nbr2) // Calcul de la soustraction (num�ro 2)
{
	int Resultat = Nbr1 - Nbr2;
	return Resultat;
}

int Multiplication(int Nbr1, int Nbr2) // Calcul de la multiplication (num�ro 3)
{
	int Resultat = Nbr1 * Nbr2;
	return Resultat;
}

float Division(int Nbr1 , int Nbr2) // Calcul de la division (Num�ro 4)
{
	float Resultat = Nbr1 / Nbr2;
	return Resultat;
}

int main()
{
	float Nbr1;
	float Nbr2;
	int Choix;
	bool quitter = true;

	while (quitter) {

	// Demande des nombres et stockage des valeurs
	std::cout << "Entrez le premier entier: \n";
	std::cin >> Nbr1;
	std::cout << "Entrez le deuxi\x8Ame entier: \n";
	std::cin >> Nbr2;

	// Demande de l'op�ration � effectuer.
	std::cout << "Choisir l'op\x82ration: \n";
	std::cout << "Additionner: 1 \n";
	std::cout << "Soustraire: 2 \n";
	std::cout << "Multiplier: 3 \n";
	std::cout << "Diviser: 4 \n";
	std::cout << "Quitter: 5 \n";
	std::cin >> Choix; // Stockage valeur Choix.

		if (Choix == 1) { // Si Choix est �gal a 1...
			std::cout << "Votre r\x82sultat est : " << Addition(Nbr1, Nbr2) << "\n";// ...�crire le r�sultat en appelant la fonction Addition
		}

		else if (Choix == 2) // Sinon si Choix est �gal a 2...
		{
			std::cout << "Votre r\x82sultat est : " << Soustraction(Nbr1, Nbr2) << "\n";// ...�crire le r�sultat en appelant la fonction Soustraction
		}

		else if (Choix == 3) // Sinon si Choix est �gal a 3...
		{
			std::cout << "Votre r\x82sultat est : " << Multiplication(Nbr1, Nbr2) << "\n";// ...�crire le r�sultat en appelant la fonction Multiplication
		}

		else if (Choix == 4) // Sinon si Choix est �gal a 4...
		{

			if (Nbr2 == 0) {
				std::cout << "ERREUR!!!\n";
			}

			else {
				std::cout << "Votre r\x82sultat est : " << Division(Nbr1, Nbr2) << "\n";// ...�crire le r�sultat en appelant la fonction Division
			}
		}
		
		else if (Choix == 5){
			
			quitter = false;
		}

	}
	
	system("pause");
	return EXIT_SUCCESS;
}