#ifndef MODERN_H
#define MODERN_H
#include "Musteri.h"
#include <iostream>
#include <map>
using namespace std;

class modern
{
public:
	modern(){}
	~modern(){}

	void musteriEkle(const Musteri& m);
	void searchMusteri(int no);
private:
	map<int, Musteri> veritabani;
};

#endif // !MODERN_H