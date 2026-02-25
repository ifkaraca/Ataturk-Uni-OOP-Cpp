// lab2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
	//soru1: kullanıcıdan alınan sayının sıfır,negatif veya pozitif olmasını sorgulama
   /* int sayi;
	cout << "Bir sayı giriniz: ";
	cin >> sayi;
	if (sayi == 0)
	{
		cout << "Sayı sıfırdır.";

	}
	else if (sayi > 0)
	{
		cout << "Sayı pozitiftir.";
	}
	else
	{
		cout << "Sayı negatiftir.";
	}*/




	//soru2: girilen 3 sayının en büyüğünü bulma
	/*int sayi1, sayi2, sayi3,enBuyuk;
	cout << "Birinci sayıyı giriniz: ";
	cin >> sayi1;
	cout << "İkinci sayıyı giriniz: ";
	cin >> sayi2;
	cout << "Üçüncü sayıyı giriniz: ";
	cin >> sayi3;
	enBuyuk = sayi1;
	if (sayi2 > enBuyuk)
	{
		enBuyuk = sayi2;
	}
	if (sayi3 > enBuyuk)
	{
		enBuyuk = sayi3;
	}
	cout << "En büyük sayı: " << enBuyuk;*/



	//soru3: girilen sayının tek mi çift mi olduğunu sorgulama
	/*int sayi;
	cout << "Bir sayı giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 0)
	{
		cout << "Sayı çifttir.";
	}
	else
	{
		cout << "Sayı tektir.";
	}*/

	//soru4: 0-100 arasında girilen sayınınharf notunu yazma 90-100 AA,80-89 BB, 70-79 CC,60-69 DD,0-59 FF
	int sayi;
	cout << "Bir sayı giriniz (0-100): ";
	cin >> sayi;
	if (sayi >= 90 && sayi <= 100)
	{
		cout << "Harf notu: AA";
	}
	else if (sayi >= 80 && sayi < 90)
	{
		cout << "Harf notu: BB";
	}
	else if (sayi >= 70 && sayi < 80)
	{
		cout << "Harf notu: CC";
	}
	else if (sayi >= 60 && sayi < 70)
	{
		cout << "Harf notu: DD";
	}
	else if (sayi >= 0 && sayi < 60)
	{
		cout << "Harf notu: FF";
	}
	else
	{
		cout << "Geçersiz sayı girdiniz.";
	}


	return 0;
}

