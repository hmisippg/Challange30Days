fun main(){
    val orangJepang    = arrayOf("naruto", "sakura", "sasuke")
    val orangAmerika   = arrayOf("Bill", "Steve", "Mark")
    val orangIndonesia = arrayOf("Udin", "budi", "asep")

    print("Masukan 1 nama")
    val inputUser = readLine()

//    refaktor
    when (inputUser){
        in orangJepang    -> println("$inputUser adalah orang jepang")
        in orangAmerika   -> println("$inputUser adalah orang Amerika")
        in orangIndonesia -> println("$inputUser adalah orang Indonesia")
    }
}