#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    set<string> strset;
    set<string>::iterator si;
    strset.insert("Kavun");
    strset.insert("portakal");
    strset.insert("uzum");
    strset.insert("elma");
    strset.insert("muz");
    strset.insert("uzum");

    for (si = strset.begin(); si != strset.end(); si++)
    {
        cout << *si << " ";
    }
    cout << endl;
    if (strset.find("erik") != strset.end())
    {
        cout << "set Icerisinde Erik Mevcuttur.\n";
    }
    else
    {
        cout << "set Icerisinde Erik Mevcut Degildir.\n";
    }
    return 0;
}
