// lab3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <clocale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");
    
    // soru 1: kullanıcıdan klavyeyle aldığı bir sayının bölenlerini bularak ekrana basan program
    /*int sayi;
    int sayac =1;
    cout << "bir sayı giriniz: ";
    cin >> sayi;

    for (sayac; sayac <= sayi; sayac++)
    {
        if (sayi % sayac == 0)
        {
            cout << sayac << endl;
        }
    }*/


    //soru 2: kullanıcıdan klavye yoluyla aldığı bir sayının asal sayı olup olmadığını belirleyen ve eğer asal sayı değil ise asal çarpanlarını ekrana basan kod
    int sayi;
    int asalSayac = 0;
    
    cout << "bir sayı giriniz: ";
    cin >> sayi;

    for (int i = 2; i < sayi; i++)
    {
        asalSayac++;
    }
    if (asalSayac > 0)
    {
        
    }
    else
    {
        cout << sayi << " Asal Sayıdır" << endl;
    }


    //soru 3: kullanıcıdan klavye yolu ile aldığı iki sayının aralarında asal olup olmadığını bulunuz
    /*int sayi1;
    int sayi2;
    int enKucuk;
    int sayac = 0;

    cout << "Birinci Sayıyı Giriniz: ";
    cin >> sayi1;
    cout << "İkinci Sayıyı Giriniz: ";
    cin >> sayi2;

    if (sayi1 < sayi2)
    {
        enKucuk = sayi1;
    }
    else
    {
        enKucuk = sayi2;
    }

    for (int i = 1; i <= enKucuk; i++)
    {
        if (sayi1 % i == 0 && sayi2 % i == 0)
        {
            sayac++;
        }
    }

    if (sayac == 1)
    {
        cout << "Aralarında Asal";
    }
    else
    {
        cout << "Aralarında Asal Değilidr";
    }*/


    //Soru 4: Kullanıcıdan Alınan 3 sayının EBOB unu bulan kod
    /*int sayi1;
    int sayi2;
    int sayi3;
    int enKucuk;

    cout << "Birinci Sayıyı Giriniz: ";
    cin >> sayi1;
    cout << "İkinci Sayıyı Giriniz: ";
    cin >> sayi2;
    cout << "Üçüncü Sayıyı Giriniz: ";
    cin >> sayi3;



    if (sayi1 < sayi2 && sayi1 < sayi3)
    {
        enKucuk = sayi1;
    }
    else if (sayi2 < sayi1 && sayi2 < sayi3)
    {
        enKucuk = sayi2;
    }
    else
    {
        enKucuk = sayi3;
    }


    for (int i = enKucuk; i > 0; i--)
    {
        if (sayi1 % i == 0 && sayi2 % i == 0 && sayi3 % i == 0)
        {
            cout << i << " Ebob dur" << endl;
            break;
        }
    }*/


    //soru 5: Kullanıcıdan Alınan 3 sayının Ekok unu bulan kod
    /*int sayi1;
    int sayi2;
    int sayi3;
    int enKucuk;

    cout << "Birinci Sayıyı Giriniz: ";
    cin >> sayi1;
    cout << "İkinci Sayıyı Giriniz: ";
    cin >> sayi2;
    cout << "Üçüncü Sayıyı Giriniz: ";
    cin >> sayi3;

   

    for (int i = 1; ; i++)
    {
        if (i%sayi1 ==0 && i%sayi2==0 && i%sayi3%i==0 )
        {
            cout << i << " Ekok dur" << endl;
            break;
        }
    }*/

    return 0;
}
