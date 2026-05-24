#ifndef ASKER_H
#define ASKER_H
#include "Birlik.h"

class Asker: public Birlik
{
private:
	string rutbe;
public:
	void GetAsker();
	void SetRutbe(string);
};

#endif // !ASKER_H
