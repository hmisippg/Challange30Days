print("Menghitung luas dan keliling persegi")


def menghitung():
    sisi = input("Masukan sisi : ")
    print("Input : L. Luas, K. Keliling")
    opt = input("masukan inputan : ")
    if opt == "L" or opt == "l":
        hasil = luas(int(sisi))
    elif opt == "K" or opt == "l":
        hasil = keliling(int(sisi))
    else:
        print("yang kamu masukan itu salah")
        menghitung()
    print("hasil perhitungan kamu = ", hasil)
    menghitung()

def luas(angka1):
    return angka1 * angka1
def keliling(angka1):
    return 4 * angka1

menghitung()

