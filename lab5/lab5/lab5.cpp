#include <iostream>
using namespace std;
//uygulama1: SicaklikDonusturucu adında ve 2 adet public üye fonksiyona sahip bir C++ sınıfı oluşturunuz.
//uygulama2: Bu örnekte Dikdortgen ve Daire sınıfları oluşturup bir ana programdan kullanılacaktır

class SicaklıkDonusturucu
{
public:
    double CelciusToFahrenhayt(int x)
    {
        return (x * 1.8) + 32;
    }
    double FahrenhaytToCelcius(int x)
    {
        return (x - 32) / 1.8;
    }
};
class Dikdöertgen
{
private:
    double kisa;
    double uzun;

public:
    Dikdöertgen(double k, double u) {
        kisa = k;
        uzun = u;

    }
    double AlanHesapla()
    {
        return kisa * uzun;
    }
    double CevreHesapla()
    {
        return 2 * (kisa + uzun);
    }

};

class Daire
{
private:
    double yaricap;
    double pi = 3.14;
public:
    Daire(double r)
    {
        yaricap = r;
    }
    double AlanHesapla()
    {
        return pi * yaricap * yaricap;
    }
    double CevreHesapla()
    {
        return 2 * pi * yaricap;
    }

};
int main()
{
    SicaklıkDonusturucu donustucu;
    /*cout << "celcius to fahrenhayt: " << donustucu.CelciusToFahrenhayt(100) << endl;
    cout << "fahrenhat to celcius: " << donustucu.FahrenhaytToCelcius(45) << endl;*/

    double k, u, r;

    cout << "Dikdortgenin kisa kenarini giriniz: ";
    cin >> k;
    cout << "Dikdortgenin uzun kenarini giriniz: ";
    cin >> u;

    Dikdöertgen dik(k, u);
    cout << "---DİKDÖRTGEN---" << endl;
    cout << "ALAN: " << dik.AlanHesapla() << endl;
    cout << "Çevre: " << dik.CevreHesapla() << endl;


    cout << "Dairenin yaricapini giriniz: ";
    cin >> r;
    Daire d(r);
    cout << "---DAİRE---" << endl;
    cout << "ALAN: " << d.AlanHesapla() << endl;
    cout << "Çevre: " << d.CevreHesapla() << endl;
}
