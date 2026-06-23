#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Final25 {
public:
	void f1(int* dizi, int boyut);
	bool f3(int sayi);
	void f2(int* dizi, int boyut);

};
void Final25::f1(int* dizi, int boyut) {
	srand(time(0));
	for (int i = 0;i<boyut;i++){
		dizi[i] = rand() % 100 + 200;
	}
}
bool Final25::f3(int sayi) {
	int sag = sayi % 10;
	sayi /= 10;
	while(sayi > 0){
		int sol = sayi % 10;
		if(sol<sag){
			return true;
		}
		return false;
		sag = sol;
		sayi /= 10;
	}
}
void Final25::f2(int* dizi, int boyut) {
	for (int i = 0; i < boyut; i++) {
		if (f3(dizi[i])) {
			cout << dizi[i] << "sayisi erzo sayisidir";
		}
	}
}
int main()
{
	int boyut = 100;
	int* dinamikdizi = new int[boyut];
	Final25* nesne = new Final25();
	nesne->f1(dinamikdizi, boyut);
	nesne->f2(dinamikdizi, boyut);
	delete[]dinamikdizi;
	delete nesne;
	return 0;
}