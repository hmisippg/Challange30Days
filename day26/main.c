#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("Program menentukan predikat nilai ujian\n");
  int nilai;
  printf("input nilai nya : ");
  scanf("%i",&nilai);

  if (nilai >= 80 && nilai<=100) {
    printf("kamu dapet A\n");
  } else if (nilai >= 70 && nilai<=79) {
    printf("kamu dapet B\n");
  } else if (nilai >= 60 && nilai<=69) {
    printf("kamu dapet C, weweew kmu gak lulus\n");
  } else if (nilai <= 59) {
    printf("kamu dapet D, ngulang bro wkwkwk!\n");
  }

  return 0;
}
