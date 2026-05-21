#include "Dikdortgen.h"
#include "DikdortgenlerPrizmasi.h"
#include <iostream>
using namespace std;
int main()
{
	/*Dikdortgen d;
	d.SetBoy(6);
	d.SetEn(12);
	cout<< d.GetAlan();*/

	DikdortgenlerPrizmasi dp;

	dp.SetBoy(8);
	dp.SetEn(2);
	dp.SetYukseklik(12);

	cout << dp.GetHacim();
}
