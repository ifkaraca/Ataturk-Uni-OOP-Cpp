// lab4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>
#include <ctime>
using namespace std;
int fibonacci(int);
void rastgele(int);
bool TamKAreMi(int);
int enKucuk(int , int , int , int&, int&);

int main()
{
    setlocale(LC_ALL, "Turkish");

    //soru1: Kullanıcıdan alınan 3 sayının en küçüğünü en büyüğünü ve ortancasını bulma dışarıdan fonksiyon yaz 
	         // değerler olarak abc enbüyük ortancayı alsın ama en büyük ve ortanca refarans değer olsun

	int sayi1, sayi2, sayi3,enBuyuk,ortanca;
	cout << "Birinci sayıyı giriniz: ";
	cin >> sayi1;
	cout << " İkinci sayıyı giriniz: ";
	cin >> sayi2;
	cout << " Üçüncü sayıyı giriniz: ";
	cin >> sayi3;


	int kucuk = enKucuk(sayi1, sayi2, sayi3, enBuyuk, ortanca);

	cout << "En büyük: " << enBuyuk << endl;
	cout << "Ortanca: " << ortanca << endl;
	cout << "En küçük: " << kucuk << endl;





	//soru2: fibonaciyi rekürsif şekilde yazmak
	/*int sayi;
	cout << "Hangi sayıyı öğrenmek isterisniz: ";
	cin >> sayi;
	cout<<fibonacci(sayi);*/

	//soru3: kullanıcıdan klavye yoluyla alınan sayı kadar rastgele 3 basamaklı sayı gelicek void fonksiyonda yazılıcak
	/*int sayi;
	cout << "Üretileicek sayı adeti: ";
	cin >> sayi;
	rastgele(sayi);*/


	//soru4: kendisine paramatre olarak aldığı pozitif tam sayı bir tam kare ise geriye true değil ise false döndüren fonskiyon
	/*int sayi;
	cout << "Sorgulayacağınız sayıyı giriniz :";
	cin >> sayi;
	if (TamKAreMi(sayi))
	{
		cout << "Bu bir tam karedir";
	}
	else
	{
		cout << "Bu bir tam kare değildir";
	}*/
}

int fibonacci(int x)
{
	if (x <= 1)
	{
		return x;
	}

	return fibonacci(x - 1) + fibonacci(x - 2);
}
void rastgele(int x)
{
	int cift = 0;
	int tek = 0;
	int onlar;
	int sayi;

	srand(time(0));
	for (int i = 1; i <= x; i++)
	{
		sayi = (100 + rand()%899);
		cout << "Üretilen Sayı: " << sayi<< endl;
		onlar = (sayi / 10) % 10;
		if (onlar % 2 == 0)
		{
			cift++;
		}
		else
		{
			tek++;
		}
	}

	cout << "Oluşturulan "<<x<<" sayı arasından "<<cift<<" tanesi çifttir"<<endl;
	cout << "Oluşturulan "<<x<<" sayı arasından "<<tek<<" tanesi tektir"<<endl;

}

bool TamKAreMi(int sayi)
{
	int x;
	x = sqrt(sayi);

	if ((x * x) == sayi)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int enKucuk(int a, int b, int c, int &enBuyuk, int &ortanca)
{
	int enKucuk;
	if (a < b && a < c)
	{
		enKucuk = a;
	}
	else if (b < a && b < c)
	{
		enKucuk = b;
	}
	else
	{
		enKucuk = c;
	}


	

	if (a > b && a > c)
	{
		enBuyuk = a;
	}
	else if ( b>a && b>c)
	{
		enBuyuk = b;
	}
	else
	{
		enBuyuk = c;
	}

	ortanca = (a + b + c) - (enKucuk + enBuyuk);

	return enKucuk;
}