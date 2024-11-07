#include <iostream>
#include <cmath>

using namespace std;

// Nr. 26
void program1() {
    float lungime, latime;
    cout << "Introdu lungimea dreptunghiului: "; cin >> lungime;
    cout << "Introdu latimea dreptunghiului: "; cin >> latime;

    // Converteste numerele negative in pozitive pentru a preveni rezultate imposibile
    lungime = abs(lungime);
    latime = abs(latime);

    float perimetru = 2 * (lungime + latime);
    float aria = lungime * latime;

    cout << "Perimetrul dreptunghiului este: " << perimetru << endl;
    cout << "Aria dreptunghiului este: " << aria << endl;
};

// Nr. 26 => problema 9
void program2() {
    float x, y;
    cout << "Introdu numarul: "; cin >> x;

    if (x < -4) y = x + 2 * pow(x, 2) + 6;
    else if (-4 <= x && x <= 4) y = (2 * x * (pow(x, 2) + 1)) / (x + 1);
    else y = 2 * pow(x, 3) + (x - 11) - 7 * pow(x, 2);

    cout << "Rezultatul este: " << y << endl;
};

// Problema 26
void program3() {
    unsigned n = 1, lastNumber = 0;
    cout << "Introdu cate numere Fibonacci vrei sa fie calculate: "; cin >> n;

    switch (n) {
    case 1: {
        break;
    };
    case 2: {
        lastNumber = 2;
        break;
    };
    default:
        unsigned i = 0, firstNumber = 0, secondNumber = 1;

        // Metoda 1 - For Loop
        for (i; i <= n; ++i) {
            lastNumber = firstNumber + secondNumber;

            firstNumber = secondNumber;
            secondNumber = lastNumber;
        };

        // Metoda 2 - While Loop
        // while (i <= n) {
        //     lastNumber = firstNumber + secondNumber;

        //     firstNumber = secondNumber;
        //     secondNumber = lastNumber;
        //     i++;
        // };

        // Metoda 3 - Do While Loop
        // do {
        //     lastNumber = firstNumber + secondNumber;

        //     firstNumber = secondNumber;
        //     secondNumber = lastNumber;
        //     i++;
        // } while (i <= n);
    };

    cout << "Nr. " << n << " din secventa Fibonacci este " << lastNumber << endl;
};

int main(){
    cout << "---- Program nr. 1 ----" << endl;
    program1();

    cout << "---- Program nr. 2 ----" << endl;
    program2();

    cout << "---- Program nr. 3 ----" << endl;
    program3();

    return 0;
};