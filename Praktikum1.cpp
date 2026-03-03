#include <iostream>
using namespace std;

int main() {
    return 0;
}

// Deklarasi Global
float p, l;

// Implementasi Prosedur & Fungsi
void Input()
{
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
}

float LuasPersegi(float x, float y)
{
    return x * y;
}

int Jumlah(int a, int b, int c)
{
    return a + b + c;
}


void Output()
{
    cout << "Hasilnya : " << LuasPersegi(p, l) << endl;
}

// Program Utama
int main()
{ // start
    Input();
    Output();
    cout << "Hasil penjumlahan : " << Jumlah(5, 6, 9);
}

