// teori3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>
#include <ctime>
using namespace std;
int KaresiniAl(int);//Fonksiyon Prototipi veya imzası
void EkranaBas();
int Faktoriyel(int);
void Swap(int,int);
void Swap2(int&,int&);
template <class V>
V Maksimum(V , V , V ); //templatesli fonksiyon prototipi


int main()
{
	setlocale(LC_ALL, "Turkish");
	//örnek 1 ------------------------------------------------------------------------ Hazır fonksiyon kullanımı
	/*int sayi1 = 2, sayi2 = 8;
	cout << pow((double)sayi1, sayi2) << endl;*/


	//örnek 2 ------------------------------------------------------------------------ Fonksiyon kullanımı
	/*for (int i = 1; i <= 10; i++)  
	{
		cout << KaresiniAl(i) << endl;
	}*/


	//örnek 3 ------------------------------------------------------------------------ Fonksiyon kullanımı
	//EkranaBas();


	//örnek 4 ------------------------------------------------------------------------ Bu Formatta kullanılırsa seed her zaman 1 olarak kabul edilir ve hep aynı sayıları görürüz
	/*cout << "Üretilebilicek Maksimum Tamsayi: " << RAND_MAX << endl;
	for (int i = 1; i <= 20; i++)
	{
		cout << (1 + rand() % 6) << endl;
	}*/  


	//örnek 5 ------------------------------------------------------------------------ Bu Kullanımda ise seed değerini kullanıcıdan alarak rastgelelik sağlanır(önerilmez)
	/*unsigned int seed;
	cout << "Çekirdek Değerini Gir: ";
	cin >> seed;
	srand(seed);
	for (int i = 1; i <= 20; i++)
	{
		cout << (1 + rand() % 6) << endl;
	}*/

	//örnek 6 ------------------------------------------------------------------------ Bu kullanımda time(0) fonksiyonu ile Epoch Zamanı nı yani bilgisayarın tam o anki değerini alarak otomatik rastgelelik sağlanır 
	/*srand(time(0));
	cout << "Saatin Tam Şu Anki Değeri: " << time(0) << endl;
	for (int i = 1; i <= 20; i++)
	{
		cout << (1 + rand() % 6) << endl;
	}*/

	//örnek 7 ------Rekürsif---------------------------------------------------------- Rekürsif fonksiyon kullanımı forlu döngü kullarak uzun satırlarla yapılan işlem 2 kısımda hızlıca çözülüyor
	/*for (int i = 1; i <= 10; i++)
	{
		cout << i << "! = " << Faktoriyel(i) << endl;
	}*/

	//örnek 8 ------------------------------------------------------------------------ Bu İşlem Çalışmaz Çünkü değiştirme işlemi esnasında kullanılan fonksiyon dışarıdaki değerleri değiştirme yetkisi tanımlanmadı
	/*int a = 2, b = 5;
	cout << "Swap Fonksiyonu Çağrılmadan Önce: " << endl;
	cout << "a= " << a << "           b= " << b << endl;
	Swap(a, b);
	cout << "Swap Fonksiyonu Çağrıldıktan Sonra: " << endl;
	cout << "a= " << a << "           b= " << b << endl;*/


	//örnek 9 ------------------------------------------------------------------------ Bu işlem üsteki işlemin çalışan halidir çünkü fonksiyonu refaranslanmış bir fonksiyondur
	/*int a = 2, b = 5;
	cout << "Swap Fonksiyonu Çağrılmadan Önce: " << endl;
	cout << "a= " << a << "           b= " << b << endl;
	Swap2(a, b);
	cout << "Swap Fonksiyonu Çağrıldıktan Sonra: " << endl;
	cout << "a= " << a << "           b= " << b << endl;*/


	//örnek 10 ------------------------------------------------------------------------ Bu örnekte iki farklı veri tipinde değişkenleri templates uygulanmış fonksiyona gönderiyoruz
	int a = 5, b = 8, c = 12;
	double d = 7.1, e = 9.3, f = 2.4;
	cout << "İnt değere göre Maksimum değer: " << Maksimum(a, b, c) << endl;
	cout << "Double değere göre Maksimum değer: " << Maksimum(d, e, f) << endl;

	return 0;
}
int KaresiniAl(int x) //fonksiyon tanımlama kısmı
{
	return x * x;
}
void EkranaBas() // Dışarıdan değer almayan veya dışarıya değer vermeyen fonksiyonlarda void kullanılır
{
	cout << "Bu Fonksiyon Hiçbir Arguman Almaz ve Geriye Hiçbir Değer Çevirmez" << endl;
}
int Faktoriyel(int sayi) //rekürsif yahni kendi kendine işleyen fonksiyon yazımı
{
	if (sayi <= 1)
	{
		return 1;
	}
	else
	{
		return sayi * Faktoriyel(sayi - 1);
	}
}
void Swap(int a, int b) //refaranslanmamış swap işlemi olduğu için bu fonksiyon dışarıda etkisizdir
{
	int geciciDegisken = a;
	a = b;
	b = geciciDegisken;
}
void Swap2(int &a, int &b) //refaranslanmış swap işlemi olduğu için bu fonksiyon dışarıda çalışır
{
	int geciciDegisken = a;
	a = b;
	b = geciciDegisken;
}
template <class V>
V Maksimum(V value1,V value2, V value3) //Bu fonksiyon tanımlamasının amacı dışarıdan farklı veri tiplerinde değerler alma ihtimali olan işlemlerde veri tipine göre
{                                       //birden falza fonksiyon yazmayı engellemek gelen değişkenin veri tipini templates sayesinde kendi ayarlar
	V max = value1;
	if (value2 > max)
	{
		max = value2;
	}
	if (value3 > max)
	{
		max = value3;
	}
	return max;
}