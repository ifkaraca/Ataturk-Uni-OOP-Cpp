#ifndef ORDU_H
#define ORDU_H
#include "Asker.h"

class Ordu
{
public:
	Ordu(int k);
	~Ordu();
	void SetOrdu(const Asker& a);
	void GetOrdu();
private:
	Asker* AskerListesi;
	int kapasite;
	int mevcut;
};
#endif // !ORDU_H

