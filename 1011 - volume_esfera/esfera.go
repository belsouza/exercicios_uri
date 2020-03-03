package main

import "fmt"

func vesfera(r float64) float64 {
	return ((4.0 / 3.0) * 3.14159 * r * r * r)
}

func main() {
	var r, vol float64
	fmt.Scanf("%f\n", &r)
	vol = vesfera(r)
	fmt.Printf("VOLUME = %.3f\n", vol)
}
