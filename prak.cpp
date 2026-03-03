#include <iostream>
using namespace std;

// ===== FUNCTION (untuk kalkulasi) =====
double hitungLuas(double alas, double tinggi)
{
    return 0.5 * alas * tinggi;
}

// ===== PROCEDURE (untuk input & output) =====
void inputData(double &alas, double &tinggi)
{
    cout << "Masukkan alas segitiga  : ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
}

void outputData(double luas)
{
    cout << "Luas segitiga adalah: " << luas << endl;
}

// ===== MAIN =====
int main()
{
    double alas, tinggi, luas;

    inputData(alas, tinggi);         // Procedure input
    luas = hitungLuas(alas, tinggi); // Function hitung
    outputData(luas);                // Procedure output

    return 0;
}