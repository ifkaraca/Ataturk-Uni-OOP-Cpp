// teori2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	//while kullanarak döngü
	/*int toplam, notSayaci, puan;
	double ortalama;
	
	toplam = 0;
	notSayaci = 0;

	cout << "Notu gir ya da  -1 girerek çık: ";
	cin >> puan;

	while (puan != -1)
	{
		toplam += puan;
		notSayaci++;
		cout << "Notu gir ya da  -1 girerek çık: ";
		cin >> puan;
	}
	ortalama = static_cast<double>(toplam) / notSayaci;
	//ortalama = (double)toplam / notSayaci;
	cout << "Sınıf Ortalaması : " << setprecision(3) << ortalama << endl;*/


	//for kullanarak döngü kurma
	/*int sayac = 1;
	for (sayac; sayac <= 10; sayac++)
	{
		cout << sayac << endl;
	}*/


	//switch-case kullanımı
	char secenek;
	cin >> secenek;
	secenek = toupper(secenek);
	switch (secenek)
	{
	case 'A':
		cout << "1";
		break;
	case 'B':
		cout << "2";
		break;
	case'C':
		cout << "3";
		break;
	default:
		cout << "Hatalı giriş yaptınız" << endl;
	}
	return 0;
}
