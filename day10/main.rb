PHI = 3.14

puts "Menghitung luas dan keliling lingkaran"

def luas r
    return PHI * r * r
end
def keliling r
    return PHI * r * 2
end
def menghitung
    puts "keterangan: L. Luas, K. Keliling"
    puts "Masukan keterangan"
    opt = gets
    puts "Masukan angka:"
    angka = gets.chomp.to_i

    if opt == "l" || "L"
        puts "menghitung luas."
        hasil = luas(angka)
    else
        puts "menghitung keliling."
        hasil = keliling(angka)
    end
    puts "Hasil perhitungan adalah #{hasil}"
    menghitung()
end

menghitung()