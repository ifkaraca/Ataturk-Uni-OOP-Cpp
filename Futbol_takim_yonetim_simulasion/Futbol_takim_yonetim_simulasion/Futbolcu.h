#ifndef FUTBOLCU_H
#define FUTBOLCU_H
#include "Sporcu.h"
#include <string>
using namespace std;

class Futbolcu: public Sporcu
{
public:
	void SetMevki(string);
	string GetMevki();
	void GetFutbolcu();
private:
	string Mevki;
};
#endif // !FUTBOLCU_H