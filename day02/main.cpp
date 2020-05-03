#include <iostream>

using namespace std;

// prototype
void startCalc();
void penjumlahan(float a, float b);
void pengurangan(float a, float b);
void perkalian(float a, float b);
void pembagian(float a, float b);

// membuat kalkulator sederhana
int main(int argc, char const *argv[])
{
    startCalc();

    return 0;
}

void startCalc(){
    int opt;
    float a,b;
    cout << "=Selamat datang di calculator sederhana=" << endl;
    cout << "Masukan angka 1: ";
    cin >> a;
    cout << "Masukan angka 2: ";
    cin >> b;
    cout << "----------1. + 2. - 3. * 4. /-----------" << endl;
    cout << "Pilih perhitungan: ";
    cin >> opt;

    if (opt == 1)
    {
        penjumlahan(a,b);
    } else if (opt == 2)
    {
        pengurangan(a,b);
    } else if (opt == 3)
    {
        perkalian(a,b);
    } else if (opt == 4)
    {
        pembagian(a,b);
    } else {
        cout << "Yang kamu masukan salah broh!" << endl;
    }
    
}
void penjumlahan(float a, float b){
    cout << "Hasil penjumlahannya: " << a + b << endl;
}

void pengurangan(float a, float b){
    cout << "Hasil pengurangannya: " << a - b << endl;
}
void perkalian(float a, float b){
    cout << "Hasil perkaliannya: " << a * b << endl;
}
void pembagian(float a, float b){
    cout << "Hasil pembagiannya: " << a / b << endl;
}