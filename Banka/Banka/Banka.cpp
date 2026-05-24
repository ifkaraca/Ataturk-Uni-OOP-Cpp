#include "Musteri.h"
#include "modern.h"
#include "klasik.h"
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    /*int kapasite;
    cout << "Lutfen Musteri kapasitesitesini giriniz: ";
    cin >> kapasite;
    cout << endl;

    klasik* bank = new klasik(kapasite);

    for (int i = 0; i < kapasite; i++)
    {
        string ad, soyad;
        int hesapNo;
        double bakiye;

        cout << endl << i + 1 << ".Musteri Adını giriniz: ";
        cin >> ad;
        cout << endl;

        cout << "Musteri Soyadını giriniz: ";
        cin >> soyad;
        cout << endl;

        cout << "Musteri Hesap No'sunu giriniz: ";
        cin >> hesapNo;
        cout << endl;

        cout << "Musteri Bakiyesini giriniz: ";
        cin >> bakiye;
        cout << endl;


        Musteri geciciMusteri;
        geciciMusteri.setKisi(ad, soyad);
        geciciMusteri.setMusteri(hesapNo, bakiye);

        bank->MusteriEkle(geciciMusteri);
    }

    int istenenNo;
    cout << "Aranan musteri nosu giriniz: ";
    cin >> istenenNo;

    bank->searchMusteri(istenenNo);

    delete bank;*/

    modern bank;

    int musteriSayisi;
    cout << "Kaç adet müşteri girişi yapacaksınız?: ";
    cin >> musteriSayisi;

    
    for (int i = 0; i < musteriSayisi; i++)
    {
        string ad, soyad;
        int hesapNo;
        double bakiye;

        cout << endl << i + 1 << ". Musteri Adını giriniz: ";
        cin >> ad;

        cout << "Musteri Soyadını giriniz: ";
        cin >> soyad;

        cout << "Musteri Hesap No'sunu giriniz: ";
        cin >> hesapNo;

        cout << "Musteri Bakiyesini giriniz: ";
        cin >> bakiye;

       
        Musteri geciciMusteri;
        geciciMusteri.setKisi(ad, soyad);
        geciciMusteri.setMusteri(hesapNo, bakiye);

        
        bank.musteriEkle(geciciMusteri);
    }

    
    int istenenNo;
    cout << endl << "Aranan musteri nosu giriniz: ";
    cin >> istenenNo;

    
    bank.searchMusteri(istenenNo);
}