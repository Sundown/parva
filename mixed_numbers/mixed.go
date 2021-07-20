package main

import (
	"fmt"
)

type Frac struct {
	N int  // Numerator
	D int  // Denominator
	h *int // Forgot what h stood for, probably wHole
}

func (m *Frac) String() string {
	if m.h != nil {
		return fmt.Sprintf("%d %d/%d", *m.h, m.N, m.D)
	}

	return fmt.Sprintf("%d/%d", m.N, m.D)
}

func (m *Frac) ToMixed() *Frac {
	// Truncate the number represented by fraction
	temp := int(m.N / m.D)
	m.h = &temp
	// Numerator = numerator - (denominator * truncateed expression)
	m.N -= m.D * *m.h

	return m
}

func main() {
	m := Frac{N: 5, D: 2}

	fmt.Printf("Simplify %s -> %s\n", m.String(), m.ToMixed().String())
}
