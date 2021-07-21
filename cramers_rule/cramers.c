// Without a doubt the worst code I've ever written
// Also I'm pretty sure this is completely broken
// https://en.wikipedia.org/wiki/Cramer%27s_rule

#include <stdio.h>

long det(const long m[9]) {
	return m[0] * ((m[4] * m[8]) - (m[5] * m[7]))
	     - m[3] * ((m[1] * m[8]) - (m[2] * m[7]))
	     + m[6] * ((m[1] * m[5]) - (m[2] * m[4]));
}

int main(void) {
	puts(
        "Cramer's Method for 3x3 system of equations\n"
	    "Input 3 equations, each of the form 'x y z w',\n"
        "e.g. '1 2 -3 0' being analogous to '1x + 2y - 3z = 0'\n");

	long m[12] = {0};
	for (unsigned i = 0; i < 12; i++) {
		long buf = 0;
		scanf("%ld", &buf);
		m[i] = buf;
	}

	const long D = det(
	    (long[]){m[0], m[1], m[2], m[4], m[5], m[6], m[8], m[9], m[10]});

	return D != 0 ? printf(
		   "\n(x, y, z) = (%ld, %ld, %ld)\n",
		   det((long[]){
		       m[3], m[1], m[2], m[7], m[5], m[6], m[11], m[9], m[10]})
		       / D,
		   det((long[]){
		       m[0], m[3], m[2], m[4], m[7], m[6], m[8], m[11], m[10]})
		       / D,
		   det((long[]){
		       m[0], m[1], m[3], m[4], m[5], m[7], m[8], m[9], m[11]})
		       / D),
	       0 : puts("\nCramer's Rule cannot solve this system"), 1;
}
