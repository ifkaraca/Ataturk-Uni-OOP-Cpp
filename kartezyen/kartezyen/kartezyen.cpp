#include <iostream>
#include "Dikdortgen.h"
using namespace std;
int main()
{
	Nokta n1(3, 5);
	Nokta n2(7, 2);
	Nokta n3(8, 9);
	Dikdortgen d(n1, n2);
	cout << "Dikdortgenin Alanı: " << d.Alan() << endl;
	if (d.IcindeMi(n3))
	{
		cout << "Evet";
	}
	else
	{
		cout << "Hayır";
	}
}
