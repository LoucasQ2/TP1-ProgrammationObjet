#include "mesFonctions.h"

//fonction pour se positionner dans l'écran à x,y
void goToXY(int xpos, int ypos) {
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos;
	scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void ouvrirFichier(std::ifstream& monFlux, const std::string& nomFichier)
{
	monFlux.open(nomFichier);
	if (!(monFlux))
	{
		std::cout << "Impossible d'ouvrir le fichier " << nomFichier;
	}
}

int lireFichier(std::ifstream& monFlux, Point tabPoints[])
{
	int nbLigne = 0;
	while (!(monFlux.eof()))
	{
		std::string ligne;
		getline(monFlux, ligne);
		if (!(ligne == ""))
		{
			nbLigne++;
		}

	}
	monFlux.close();
	return nbLigne;
}

void read(std::istream& input, Point tabPoints[])
{
	int i = 0, x = 0, y = 0, color = 0;
	char skip;
	while (!(input.eof()))
	{
		input >> skip >> x >> skip  >> y >> skip >> color;
		tabPoints[i].setPoint(x, y, color);
		i++;

	}
}

void afficherForme(const Point tabPoints[], int longueur, std::ostream& monFlux)
{
	int x = 0, y = 0, color = 0;
	for (int i = 0; i < longueur; i++)
	{
		tabPoints[i].draw(std::cout);
	}
}
