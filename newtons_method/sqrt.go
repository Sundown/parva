package main

import (
	"fmt"
	"math"
)

func newton(guess float64, x float64, tol float64) float64 {
	if math.Abs(x-math.Pow(guess, 2.0)) < tol {
		return guess
	} else {
		return newton((guess+x/guess)/2, x, tol)
	}
}

func main() {
	res := newton(1, 13, 0.00001)
	fmt.Printf("%f\n%f\n", res, math.Pow(res, 2))
}
