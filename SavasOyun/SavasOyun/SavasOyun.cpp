#include <iostream>
#include <clocale>
#include <string>
#include "Asker.h"
#include "Ordu.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int kapasite;
    cout << "Lütfen Ordu Kapsitesini Giriniz: ";
    cin >> kapasite;

    Ordu* Tugay = new Ordu(kapasite);

    for (int i = 0; i < kapasite; i++)
    {
        string rutbe, tur;
        int guc;

        cout << endl << i + 1 << ". Askerin Türü: ";
        cin >> tur;

        cout << "Rütbesi: ";
        cin >> rutbe;

        cout << "Gücü: ";
        cin >> guc;

        Asker geciciAsker;
        geciciAsker.SetBirlik(tur, guc);
        geciciAsker.SetRutbe(rutbe);

        Tugay->SetOrdu(geciciAsker);
    }

    Tugay->GetOrdu();

    delete Tugay;

    cout << "\nProgram başarıyla sonlandırıldı. Bellek iade edildi." << endl;

    return 0;
}
