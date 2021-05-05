#include <math.h>
#include <stdio.h>

double newton(double guess, double x, double tol) {
        return fabs(x - pow(guess, 2)) < tol
                ? guess
                : newton((guess + x / guess) / 2, x, tol);
}

int main(void) {
	double res = newton(1, 13, 0.000001);
	printf("%f\n%f\n", res, pow(res, 2));

	return 0;
}
