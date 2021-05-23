// crt_tan.c
// This program displays the tangent of pi / 4
// Compile by using: cl crt_tan.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

int main(void) {
	double pi = 3.1415926535;
	double x;

	x = tan(pi / 4);
	printf("tan( %f ) = %f\n", pi / 4, x);

	_getch();
	return 0;
}