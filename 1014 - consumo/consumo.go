package main

import( "fmt" )

func consumo( x int32, y float32 ) float32{
	return (float32(x) / y)
}

func main(){
	var x int32
	var y float32
	var con float32
	fmt.Scanf("%d", &x);
	fmt.Scanf("%f", &y);
	con = consumo(x,y)
	fmt.Printf("%.3f km/l\n", con)	
}