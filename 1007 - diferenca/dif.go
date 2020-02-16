package main

import (
	"C"
	"fmt"
)

func diferenca( a int32, b int32, c int32, d int32) int32{
	return ((a * b) - (c * d))
}

func main(){
	var a, b, c, d, diff int32
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &c)
	fmt.Scanf("%d", &d)
	diff = diferenca(a, b, c, d)
	fmt.Printf("DIFERENCA = %d\n", diff)
}