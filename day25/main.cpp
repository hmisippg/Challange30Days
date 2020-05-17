#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {

  cout << "Konversi bilangan dalam satuan jam, menit, detik ke ditik.\n";
  int jam   = 3600;
  int menit =   60;
  int a, inputJam, inputMenit, inputDetik;
  cout << "input jamnya : ";
  cin >> inputJam ;
  cout << "input menitnya : ";
  cin >> inputMenit;
  cout << "input detiknya : ";
  cin >> inputDetik;

  a = inputJam * jam + inputMenit * menit + inputDetik;
  cout << "hasil konversi kamu :" << a << " detik" << endl;

  return 0;
}
