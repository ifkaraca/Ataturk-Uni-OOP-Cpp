#ifndef KISI_H
#define KISI_H
#include <string>

class Kisi
{
protected:
	std::string ad;
	std::string soyad;
public:
	void setKisi(std::string, std::string);
	void getKisi();
};

#endif // !KISI_H
