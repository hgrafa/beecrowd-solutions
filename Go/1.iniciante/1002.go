package main

import (
	"fmt"
)

func main() {

	var x float64
	pi := 3.14159

	fmt.Scan(&x)
	area := x * x * pi

	fmt.Printf("A=%.4f\n", area)
}
