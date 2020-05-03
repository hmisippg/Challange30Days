
var pokemons = mutableMapOf<String, Int>(
    "pikachu" to 100,
    "bulbasaurus" to 100,
    "charmander" to 100
)

fun main(){
    // addPokemon(nama, power)
    addPokemon("kyubi", 110)
    // upgradePower(nama, power+100)
    upgradePower("pikachu", 100)
    battle("pikachu", "bulbasaurus")

    pokemons.forEach {
        t, u -> println("nama Pokemon : $t , Powernya $u")
    }
}
 fun addPokemon(pokemon:String, power:Int = 100){
     pokemons.put(pokemon, power)
     println("Pokemon baru telah ditambahkan, namanya $pokemon")
 }

 fun upgradePower(pokemon:String, power:Int){
     var newPower = pokemons[pokemon]!! + power
     pokemons.replace(pokemon, newPower)
     println("pokemon dengan nama $pokemon, powernya menjadi $newPower")
 }

 fun battle(poke1: String, poke2: String){
     var pokemon1 = pokemons[poke1]!!
     var pokemon2 = pokemons[poke2]!!

     println("Pertarungan dimulai...")
     if (pokemon1 > pokemon2){
         println("$poke1 menang!")
         pokemons.remove(poke2)
     }else if (pokemon1 == pokemon2){
         println("Seriii!")
     }else {
         println("$poke1 kamu kalah!")
         pokemons.remove(poke1)
     }
 }