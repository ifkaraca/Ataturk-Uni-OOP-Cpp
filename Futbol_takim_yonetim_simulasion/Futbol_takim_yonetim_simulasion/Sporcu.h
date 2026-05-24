#ifndef SPORCU_H
#define SPORCU_H

#include <string>
using namespace std;
class Sporcu
{
public:
	Sporcu();
	void GetSporcu();
	void SetSporcu(string,int);

protected:
	string Ad;
	int kondisyon;
};


#endif // !SPORCU_H