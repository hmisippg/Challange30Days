name = input("Masukan nama monster kamu: ")
monster = {
    "nama" : name,
    "power": 100
}

def startGame():
    print("1.Makan 2.Check Status 3.Exit")
    opt = input("Mau ngapain nich: ")
    if opt == "1":
        getMamam()
    elif opt == "2":
        getAtus()
    elif opt == "3":
        getExcit()
    else:
        print("Broh yang kamu masukin salah, check again!")
        # rekursif fucntion
        startGame()

def getMamam():
    monster['power'] += 50
    print("emmm enakk")
    print("power monster kamu bertambah...", monster['power'])
    startGame()

def getAtus():
    print("Nama Monster  : " + monster['nama'])
    print("Power Monster :", monster['power'])
    startGame()

def getExcit():
    print("yahhh kamu keluar, baybayyy :D")


startGame()