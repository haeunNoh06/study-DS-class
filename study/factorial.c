#include <stdio.h>

int factorial(int n) {
	if (n == 1) return 1;
	else return n * factorial(n - 1);
}

int main(void) {

	int n = 5;

	printf("%d != %d\n", n, factorial(n));

	return 0;
}

//#include <stdio.h>
//
//int main(void) {
//
//	int n = 5, i, factorial = 1;
//
//	for (i = n; i >= 1; i--) {
//		factorial *= i;
//	}
//	printf("%d != %d\n", n, factorial);
//
//
//	return 0;
//}