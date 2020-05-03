#include <iostream>

using namespace std;

// proto
void startCalc();
double luas(double a, double b);
double keliling(double a, double b, double c);

int main(){
    cout << "kalkulator Menghitung luas dan keliling segitiga" << endl;
    cout << "Keterangan : L = luas, K = Keliling" << endl;
    startCalc();
    return 0;
}

void startCalc(){
    double a,b,c,hasil;
    char opt;
    
    cout << "Masukan pilihan ";
    cin >> opt;

    if (opt == 'L' || opt == 'l')
    {
        cout << "Menghitung Luas Segitiga" << endl;
        cout << "Masukan alas segitiganya : ";
        cin >> a;
        cout << "Masukan tinggi segitiganya : ";
        cin >> b;
        hasil = luas(a,b);
    } else if (opt == 'K' || opt == 'k')
    {
        cout << "Menghitung keliling Segitiga" << endl;
        cout << "Masukan sisi A segitiganya : ";
        cin >> a;
        cout << "Masukan sisi b segitiganya : ";
        cin >> b;
        cout << "Masukan sisi c segitiganya : ";
        cin >> c;
        hasil = keliling(a,b,c);
    } else {
        cout << "ops, yang kamu masukan salah brooo," << endl;
        startCalc();
    }
    cout << "hasil dari perhitungan = " << hasil << endl;
    startCalc();
}

double luas(double a, double b){
    // Luas segitiga 1/2 * a * t
    return 0.5 * a * b;

}

double keliling(double a, double b, double c){
    // Keliling segitiga a + b + c
    return a + b + c;
}