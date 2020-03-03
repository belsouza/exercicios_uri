package main

import (
	"C"
	"fmt"
	"math"
)

func maiordedois(a int32, b int32) int32 {
	var xf float64
	xf = math.Abs(float64(a) - float64(b))
	return ((a + b + int32(xf)) / 2)
}

func maiordetres(a int32, b int32, c int32) int32 {
	var p1, p2 int32
	p1 = maiordedois(a, b)
	p2 = maiordedois(p1, c)
	return p2
}

func main() {
	var a, b, c, maior int32
	fmt.Scanf("%d  %d  %d", &a, &b, &c)
	maior = maiordetres(a, b, c)
	fmt.Printf("%d eh o maior\n", maior)
}
