#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Isletme
{
protected:
    int gunlukMaliyet;
public:
    Isletme(int a)
    {
        gunlukMaliyet = a;
    }
};

class AsitLabraturari : public Isletme
{
private:
    int* teslimatDegerleri;
    int teslimatSayisi;
public:
    AsitLabraturari(int maliyet, int teslimatAdedi) : Isletme(maliyet)
    {
        teslimatSayisi = teslimatAdedi;
        teslimatDegerleri = new int[teslimatSayisi];
    }

    ~AsitLabraturari()
    {
        delete[] teslimatDegerleri;
    }

    void mallariHazirla()
    {
        srand(time(0));
        for (int i = 0; i < teslimatSayisi; i++)
        {
            teslimatDegerleri[i] = rand() % 40001 + 10000;
            cout << i+1 << ". kazanc" << teslimatDegerleri[i] << endl;
        }
    }

    void bilancoCikar()
    {
        int toplam = 0;
        for (int i = 0; i < teslimatSayisi; i++)
        {
            toplam += teslimatDegerleri[i];
        }

        int kar = toplam - gunlukMaliyet;

        cout << "Toplam Kazanc: " << toplam<<endl;
        cout << "Gunluk Maliyet: " << gunlukMaliyet << endl;
        cout << "Kar: " << kar << endl;
    }
};

int main()
{
    AsitLabraturari* nesne = new AsitLabraturari(30000,10);
    nesne->mallariHazirla();
    nesne->bilancoCikar();

    delete nesne;

}