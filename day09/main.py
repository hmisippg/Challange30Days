print("Menghitung luas dan keliling persegi Panjang")


def menghitung():
    panjang = int(input("Masukan panjang : "))
    lebar   = int(input("Masukan lebar   : "))
    print("Input : L. Luas, K. Keliling")
    opt = input("masukan inputan : ")
    if opt == "L" or opt == "l":
        hasil = luas(panjang, lebar)
    elif opt == "K" or opt == "l":
        hasil = keliling(panjang, lebar)
    else:
        print("yang kamu masukan itu salah")
        menghitung()
    print("hasil perhitungan kamu = ", hasil)
    menghitung()

def luas(angka1, angka2):
    return angka1 * angka2
def keliling(angka1, angka2):
    return 2 * (angka1 + angka2)

menghitung()

