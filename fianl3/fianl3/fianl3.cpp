#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class soy
{
protected:
	int askersayisi;
public:
	soy(int asayisi);
};

soy::soy(int asayisi)
{
	askersayisi = asayisi;
}

class stark : public soy {
private:
	int* uluKurtGucu;
	int uluKurtSayisi;
public:
	stark(int orduBuyuklugu, int kurtAdedi) : soy(orduBuyuklugu) 
	{
		uluKurtSayisi = kurtAdedi;
		uluKurtGucu = new int[uluKurtSayisi];
	}

	~stark() {
		delete[] uluKurtGucu;
		cout << "\n[Sistem]: Ulu kurtlarin bellek alani temizlendi." << endl;
	}

	void kurtariEgit()
	{
		srand(time(0));
		for (int i = 0; i < uluKurtSayisi; i++) {
			uluKurtGucu[i] = rand() % 51 + 50;
			cout << i + 1 << ". Kurt Gucu: " << uluKurtGucu[i] << endl;
		}
	}

	void gucHesapla()
	{
		int kurtGucu = 0;

		for (int i = 0; i < uluKurtSayisi; i++) 
		{
			kurtGucu += uluKurtGucu[i];
		}

		int toplamGuc = kurtGucu + askersayisi;

		cout << "\nAsker Sayisi: " << askersayisi << endl;
		cout << "Kurtlarin Toplam Gucu: " << kurtGucu << endl;
		cout << "Kuzeyin Toplam Gucu: " << toplamGuc << endl;
	}
};



int main()
{
	stark* winterfell = new stark(5000, 5);
	winterfell->kurtariEgit();
	winterfell->gucHesapla();

	delete winterfell;
	return 0;
}