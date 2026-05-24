#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int sicilNo;
	map<int, string> personel;
	map<int, string>::iterator mit;
	personel[5234] = "Mike A.";
	personel[3374] = "Mike B.";
	personel[1923] = "Mike c.";
	personel[7582] = "Mike D.";
	personel[5328] = "Mike E.";

	cout << "Sicil No Giriniz: ";
	cin >> sicilNo;
	mit = personel.find(sicilNo);
	if (mit != personel.end())
	{
		cout << "Sicil Nosu: " << sicilNo << " olan" << personel[sicilNo] << "in Kaydi siliniyor." << endl;
		personel.erase(mit);
	}
	else
	{
		cout << "Sicil Nosu: " << sicilNo << " olan personel bulunamadı" << endl;
	}
	cout << "Sirketteki personel sayisi: " << personel.size() << endl;
	for (mit = personel.begin(); mit != personel.end(); mit++)
	{
		cout << (*mit).first << ":" << mit->second << endl;
	}
}