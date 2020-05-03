package main

import "fmt"

func main() {
	for i := 0; i < 20; i++ {
		if i%2 == 0 {
			fmt.Println(i, "= Bilangan Genap")
		} else {
			fmt.Println(i, "= Bilangan Ganjil")

		}
	}
}
