#include <iostream>

using namespace std;

// Eu sunt nr. 26 in catalog, fac exercitiul 26.
int main()
{
    // Declararea variabilei n = nr. de elemente din array
    unsigned n;

    // Introducerea nr. de elemente din array de catre utilizator
    cout << "Introdu nr. de elemente ce in array: ";
    cin >> n;

    // Resetarea nr. sub 40 daca trece de el (din conditie)
    if (n >= 40)
    {
        n = 39;
        cout << "Nr. de elemente trebuie sa fie mai mic decat 40. Valoare introdusa a fost resetata la 39." << endl;
    }

    // Declararea array-ului si initializarea variabilei ce contine suma nr. pozitive
    int H[n], sumPositive = 0;

    // Interarea prin fiecare element al array-ului
    for (unsigned i = 0; i < n; i++)
    {
        // Introducerea la fiecare element individual de catre utilizator
        cout << "Introdu H[" << i << "] = ";
        cin >> H[i];

        // Adaugarea elementului daca e pozitiv la suma numerelor pozitive
        if (H[i] > 0) sumPositive += H[i];
    };

    // Afisarea sumei numerelor pozitive din array
    cout << "Suma numerelor pozitive din acest array este: " << sumPositive << endl;

    return 0;
}