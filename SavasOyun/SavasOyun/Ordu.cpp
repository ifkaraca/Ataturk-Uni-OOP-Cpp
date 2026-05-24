#include "Ordu.h"
#include <iostream>
using namespace std;
Ordu::Ordu(int k)
{
	kapasite = k;
	mevcut = 0;

	AskerListesi = new Asker[kapasite];
}
Ordu::~Ordu()
{
	delete[] AskerListesi;
}
void Ordu::SetOrdu(const Asker &yeniASker)
{
	if (mevcut < kapasite)
	{
		AskerListesi[mevcut] = yeniASker;
		mevcut++;
	}
	else
	{
		cout << "Hata! Ordu Dolu." << endl;
	}
}

void Ordu::GetOrdu()
{
	cout <<endl<< "-Ordu Bilgisi-" << endl;
	for (int i = 0; i < kapasite; i++)
	{
		cout << i + 1 << ". Asker";
		AskerListesi[i].GetAsker();
	}
}