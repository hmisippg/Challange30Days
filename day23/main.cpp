#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  cout << "Putri raja mencari jodoh" << endl;
  string criteria[] = {"naruto", "baik hati", "tidak sombong"};

  if (criteria[0] == "pria") {
    if (criteria[1] == "baik hati" && criteria[2] == "tidak sombong") {
      cout << "Nikah yu, kamu jodoh aku, aku suka" << endl;
    } else {
      cout << "emm, keknya kamu terlalu baik buat aku :D" << endl;
    }
  } else if (criteria[0] == "wanita") {
      if (criteria[1] == "baik hati" && criteria[2] == "tidak sombong") {
        cout << "kita jadi sahabat karibs yuk" << endl;
    } else {
        cout << "emmm, kita jadi temen biasa aja ya" << endl;
    }
  } else {
    cout << "Pergi sana, kamu itu apa?" << endl;
  }
  return 0;
}
