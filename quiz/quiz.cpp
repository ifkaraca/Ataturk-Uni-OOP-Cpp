// girilen n sayısı kadar basamakları toplamı 8 veya 8 den büyük olan sayıların toplamı

#include <iostream>
#include <clocale>

using namespace std;
int RakamToplami(int x);
int OzelToplam(int n);

int main()
{
    setlocale(LC_ALL, "Turkish");
    int n;
    cout << "n sayisini girin: ";
    cin >> n;
    int sonuc = OzelToplam(n);
    cout << "Toplam: " << sonuc << endl;
}

int RakamToplami(int x)
{
    int toplam = 0;
    int sayi = x;
    while (sayi > 0)
    {
        toplam += sayi % 10;
        sayi = sayi / 10;
    }

    return toplam;
}

int OzelToplam(int n)
{
    int toplam = 0;
    int sayac = 0;
    cout << "Kurala uygun sayilar: ";
    for (int i = n;; i++)
    {
        if (RakamToplami(i) >= 8)
        {
            sayac++;
            toplam += i;
            cout << i << " ";
        }
        if (sayac == n)
        {
            break;
        }
    }
    cout << endl;
    return toplam;
}