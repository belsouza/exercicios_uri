package main

import (
	"C"
	"fmt"
)

func areadotrianguloretangulo(baseA float64, alturaC float64) float64 {
	return ((baseA * alturaC) / 2.0)
}

func areadocirculo(raioC float64) float64 {
	return (3.14159 * raioC * raioC)
}

func areadotrapezio(baseA float64, baseB float64, alturaC float64) float64 {
	return (((baseA + baseB) * alturaC) / 2.0)
}

func areadoquadrado(ladoB float64) float64 {
	return (ladoB * ladoB)
}

func areadoretangulo(ladoA float64, ladoB float64) float64 {
	return (ladoA * ladoB)
}

func main() {
	var a, b, c float64
	fmt.Scanf("%f  %f  %f", &a, &b, &c)
	fmt.Printf("TRIANGULO: %.3f\n", areadotrianguloretangulo(a, c))
	fmt.Printf("CIRCULO: %.3f\n", areadocirculo(c))
	fmt.Printf("TRAPEZIO: %.3f\n", areadotrapezio(a, b, c))
	fmt.Printf("QUADRADO: %.3f\n", areadoquadrado(b))
	fmt.Printf("RETANGULO: %.3f\n", areadoretangulo(a, b))
}
