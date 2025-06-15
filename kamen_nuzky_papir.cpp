#include <iostream>
#include <ctime>
#include <cstdlib>


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int volbaHrace;
	int pocetKol;
	int vyhra = 0;
	int prohra = 0;
	int remiza = 0;

	std::string volby[3] = { "Kamen", "Nuzky", "Papir" };

	std::cout << "Zadej kolik kol chces hrat: " << std::endl;
	std::cin >> pocetKol;

	for (int i = 0; i < pocetKol; i++) {
		std::cout << "Vyber si 0) Kamen, 1) Nuzky, 2) Papir" << std::endl;
		std::cin >> volbaHrace;

		int volbaPocitace = rand() % 3;
		puts("");

		std::cout << "Tva volba: " << volby[volbaHrace] << std::endl;
		std::cout << "Volba pocitace: " << volby[volbaPocitace] << std::endl;

		if (volbaHrace == volbaPocitace) {
			std::cout << "Remiza" << std::endl;
			remiza++;
			puts("");

		}
		else if ((volbaHrace == 0 && volbaPocitace == 1) ||
			(volbaHrace == 1 && volbaPocitace == 2) ||
			(volbaHrace == 2 && volbaPocitace == 0)) {
			std::cout << "Vyhral jsi!" << std::endl;
			vyhra++;
			puts("");

		}
		else {
			std::cout << "Prohral jsi!" << std::endl;
			prohra++;
			puts("");

		}

	}
	double celkem = vyhra + prohra + remiza;
	double procentoVyhra = (vyhra / celkem) * 100.0;
	double procentoProhra = (prohra / celkem) * 100.0;
	double procentoRemiza = (remiza / celkem) * 100.0;


	std::cout << "Diky za hru" << std::endl;
	puts("");

	std::cout << "Vase skore: " << std::endl;
	std::cout << "Vyhry: " << vyhra << std::endl;
	std::cout << "Prohry: " << prohra << std::endl;
	std::cout << "Remizy: " << remiza << std::endl;


	std::cout << "\nUspesnost:\n";
	std::cout << "Vyhry: " << procentoVyhra << " %\n";
	std::cout << "Prohry: " << procentoProhra << " %\n";
	std::cout << "Remizy: " << procentoRemiza << " %\n";
	return 0;
}

