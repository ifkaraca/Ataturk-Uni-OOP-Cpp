#include <iostream>
#include <iomanip>
#include <clocale>
#include <ctime>
using namespace std;
void ikiKatinaCikar(int [], int );
int LineerArama(const int [], int , int );
void DiziyiSirala(int [], int );

int main()
{
	setlocale(LC_ALL, "Turkish");
   //------------------------------------------------------------------------------dizileri deklare etmenin farklı yolları vardır.
	/*
	int n[10];  //deklare sırasında parantez içine yazılan sayı eleman sayısıdır
	int m[] = { 12,23,34,45,56,67,78,89,90,68}; // deklre sırasında eğer parantez içi boş bırakılıp direkt elamanlar verilir dizi boyutu girilen eleman sayısı kadar olur
	int c[10] = { 22,33,44,55,66 }; //deklare sırasında hem parantez hem de elemanlar gilir ve girilen elaman sayısı parantez içinden azsa geri kalanı 0 olarak doldurulur

	//------------------------------------------------------------------------------dizinin içerisindeki elamana ulaşmak için n[0] gibi bir indis değeri girilir not: indisler 0 dan başlar 
	for (int i = 0; i < 10; i++)
	{
		n[i] = 0;
	}

	cout << "Eleman" << setw(13) << "Değer" << endl; //setw() değimi araya boşluk koymak için kullanılır default olarak sağa dayalı olur her zaman kendi içinden yer right veya left yazarak yönü belirlenebilir
	for (int j = 0; j < 10; j++)
	{
		cout << setw(6) << j << setw(13) << m[j] << endl;
	}
	*/

	//------const------------------------------------------------------------------- bu değim dizinin eleman sayısı gibi değişmemesi gereken değişkenlerde kullanılır
	/*
	const int diziBoyutu = 10;
	int toplam = 0;

	int m[diziBoyutu] = { 12,23,34,45,56,67,78,89,90,68 };

	for (int i = 0; i < 10; i++)
	{
		toplam += m[i];
	}
	cout << "Elemanların Ttoplamı: " << toplam << endl;
	*/

	//------------------------------------------------------------------------------ string diziyi farklı şekillerde tanımlayabilirz
	/*
	char selam[] = "Merhaba"; //direkt metin girilir içeride her harf ayrılır ve son terime \0 olarak eklenir yani 5 harfli bir kelime 6 boyutlu bir dizi olur
	char selam2[] = { 'M','e','r','h','a','b','a','\0' };  //ya da her harfi ayrı ayrı tek tırnak içine yazılır
	cout << selam2<<endl;
	*/

	//------------------------------------------------------------------------------
	/*
	char isim[20];
	cout << "Adınızı Giriniz: ";
	cin >> isim;
	cout << "Adınız: " << isim << endl;

	for (int i = 0; isim[i] != '\0'; i++)
	{
		cout << isim[i] << ' ';
	}
	*/
	//------------------------------------------------------------------------------ dizinin elemanlarını fonksiyonla değiştirme
	/*const int diziBoyutu = 5;
	int a[diziBoyutu] = { 0,1,2,3,4 };

	cout << "Fonksiyona gönderilmeden önce dizi elemanları" << endl;
	for (int i = 0; i < diziBoyutu; i++)
	{
		cout << a[i]<<' ';
	}
	cout << endl;

	ikiKatinaCikar(a, diziBoyutu);

	cout << "Fonksiyona gönderildikten sonra dizi elemanları" << endl;
	for (int j = 0; j < diziBoyutu; j++)
	{
		cout << a[j] << ' ';
	}*/

	//------------------------------------------------------------------------------ fonksiyon ile lineer arama
	/*const int diziBoyutu = 100;
	int a[diziBoyutu];
	int arananDeger;
	int indis;

	for (int i = 1; i < diziBoyutu; i++)
	{
		a[i] = 2 * i;
	}
	cout << "Aranacak Tamsayıyı Gir: ";
	cin >> arananDeger;
	indis = LineerArama(a, arananDeger, diziBoyutu);
	if (indis == -1)
	{
		cout << "Dizinin içerisinde " << arananDeger << " bulunmamaktadır.";
	}
	else
	{
		cout << "Aranan değer " << indis << ". indiste ";
	}*/

	//------------------------------------------------------------------------------ iki boyutlu dizi
	/*int a[2][2] = { {1,2},{3,4} };*/

	//------------------------------------------------------------------------------ seçme sıralama
	srand(time(0));
	const int diziBoyutu = 10;
	int a[diziBoyutu];
	cout << "Sıralanmamış dizinin içeriği: " << endl;
	for (int i = 0; i < diziBoyutu; i++)
	{
		a[i] = rand() % 999 + 1;
		cout << a[i] << ' ';
	}
	cout << endl;
	DiziyiSirala(a, diziBoyutu);
	cout << "Dizini sıralnmış hali" << endl;
	for (int j = 0; j < diziBoyutu; j++)
	{
		cout << a[j] << ' ';
	}
	cout << endl;





	return 0;
}
void ikiKatinaCikar(int x[], int diziBoyutu) //dizinin elemanlarını değiştiren fonksiyon
{
	for (int i = 0; i < diziBoyutu ; i++)
	{
		x[i] *= 2;
	}
}

int LineerArama(const int x[], int aranan, int diziBoyutu) //dizi içi arama
{
	for (int i = 0; i < diziBoyutu; i++)
	{
		if (aranan == x[i])
		{
			return i;
		}
	}
	return -1;
}
void DiziyiSirala(int x[], int diziBoyutu)
{
	int minimumunIndisi;
	int geciciDegisken;
	for (int i = 0; i < (diziBoyutu - 1); i++)//kaçıncı en küçük eleman aranıyor
	{
		minimumunIndisi = i;
		for (int j = i + 1; j < diziBoyutu; j++)//hangi aralıkta aranıyor
		{
			if (x[j] < x[minimumunIndisi])
			{
				minimumunIndisi = j;
			}
		}
		if (i!=minimumunIndisi)
		{
			//swap
			geciciDegisken = x[i];
			x[i] = x[minimumunIndisi];
			x[minimumunIndisi] = geciciDegisken;

		}
	}
}