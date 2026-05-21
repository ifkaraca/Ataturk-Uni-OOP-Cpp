#include <iostream>
#include <cstring>

class Ogrenci
{
private:
    char *isim; // İsmi dinamik olarak saklamak için pointer
    int id;

public:
    // Yapıcı Metot (Constructor)
    Ogrenci(const char *ad, int no)
    {
        id = no;
        // İsim için bellekte yer açıyoruz (Dinamik Tahsis)
        isim = new char[strlen(ad) + 1];
        strcpy(isim, ad);

        std::cout << id << " numarali " << isim << " icin bellek ayrildi." << std::endl;
    }

    // Yıkıcı Metot (Destructor)
    ~Ogrenci()
    {
        std::cout << id << " numarali " << isim << " nesnesi yok ediliyor..." << std::endl;

        // ÖNEMLİ: 'new' ile açılan alanı burada 'delete' ile temizliyoruz
        delete[] isim;

        std::cout << "Bellek basariyla temizlendi." << std::endl;
    }

    void bilgileriGoster()
    {
        std::cout << "Ogrenci: " << isim << " | No: " << id << std::endl;
    }
};

int main()
{
    std::cout << "--- Program Basladi ---" << std::endl;

    // 1. Blok içinde nesne oluşturma (Kapsam/Scope deneyi)
    {
        std::cout << "\nLocal blok icine girildi." << std::endl;
        Ogrenci ogr1("Ahmet", 101);
        ogr1.bilgileriGoster();
        std::cout << "Local bloktan cikiliyor..." << std::endl;
    } // ogr1 burada ölür, yıkıcı otomatik çağrılır.

    // 2. Dinamik nesne oluşturma (Pointer ile)
    std::cout << "\nPointer ile nesne olusturuluyor..." << std::endl;
    Ogrenci *ogr2 = new Ogrenci("Ayse", 102);
    ogr2->bilgileriGoster();

    std::cout << "Dinamik nesne manuel olarak siliniyor..." << std::endl;
    delete ogr2; // delete komutu verilmeden yıkıcı ÇALIŞMAZ!

    std::cout << "\n--- Program Bitti ---" << std::endl;
    return 0;
}