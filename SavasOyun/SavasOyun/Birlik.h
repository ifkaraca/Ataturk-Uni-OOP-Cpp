#ifndef BIRLIK_H
#define BIRLIK_H


#include <string>
using namespace std;
class Birlik
{
public:
	void SetBirlik(string, int);
	void GetBirlik();
protected:
	string tur;
	int guc;
};

#endif // !BIRLIK_H