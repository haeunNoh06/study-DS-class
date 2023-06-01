#include <stdio.h>
#define SIZE 1000000	

int main(void) {
	int *a = (int *)malloc(sizeof(int)*SIZE); // 배열 a는 4MB 크기를

	a[0] = 10;
	printf("%d\n", a[0]);

	free(a);

	return 0;
}