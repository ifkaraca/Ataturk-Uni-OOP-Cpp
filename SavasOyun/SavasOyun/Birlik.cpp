#include "Birlik.h"
#include <string>
#include <iostream>
using namespace std;
void Birlik::GetBirlik()
{
	cout << "Turu: " << tur << endl;
	cout << "Gucu: " << guc << endl;
}

void Birlik::SetBirlik(string turu, int gucu)
{
	tur = turu;
	guc = gucu;
}