
#include <iostream>
#include "final26.h"
using namespace std;


int main()
{
    int boyut = 15;
    final26* nesne = new final26();
    int* dinamikdizi = new int[boyut];
    nesne->rastgeledizidoldur(dinamikdizi, boyut);
   
    if (nesne->tamamiucbasamaklimi(dinamikdizi, boyut))
    {
        nesne->sirala(dinamikdizi, boyut);
        for (int i = 0; i < boyut; i++)
        {
            cout << dinamikdizi[i] << " ";
        }
    }
    else
    {
        cout << "Siralanamaz";
    }
}