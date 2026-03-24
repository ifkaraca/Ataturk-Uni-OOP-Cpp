#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    // soru1: mükemmel sayı kontrolü kendinden başka pozitif bölenlerinin toplamına eşit olan sayılara denir
    /*int sayi;
    int toplam = 0;
    cout << "Lütfen kontrol etmek istediğiniz sayıyı giriniz: ";
    cin >> sayi;

    for (int i = sayi - 1; i > 0; i--)
    {
        if (sayi % i == 0)
        {
            cout << i << " ";
            toplam += i;
        }
    }
    if (toplam == sayi)
    {
        cout << "Mükkemmel sayıdır." << endl;
    }
    else
    {
        cout << "Mükemmel sayı değildir" << endl;
    }*/

    // soru2: Kullanıcıdan alınan bir tam sayının kaç basamaklı olduğunu ve bu basamaklardaki rakamların toplamını ekrana basan programı yazınız.

    /*int sayi;
    int toplam = 0;
    int adet = 0;

    cout << "Sayıyı giriniz: ";
    cin >> sayi;

    while (sayi > 0)
    {
        toplam += sayi % 10;
        sayi = sayi / 10;
        adet++;
    }

    cout << "Basamak Sayısı: " << adet << " Toplamı: " << toplam << endl;*/
}