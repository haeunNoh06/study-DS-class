#include <stdio.h>
#define SIZE 6

int queue[SIZE] = { 0, };
int rear = -1, front = 0;
int cnt = 0;

int add(int data) {
	if ( cnt == SIZE ) {
		printf("CQueue Overflow!\n");
		return -1;
	}
	queue[++rear%SIZE] = data;
	cnt++;
	return 0;
}

int delete(void) {
	if ( cnt == 0 ) {
		printf("CQueue is empty!\n");
		return -1;
	}
	cnt--;
	return queue[front++%SIZE];
}

int main(void) {

	add(10);	// rear : 0, front : 0
	add(20);	// rear : 1, front : 0

	printf("%d\n", delete());	// rear : 1, front : 1
	printf("%d\n", delete());	// rear : 1, font : 2
	printf("%d\n", delete());	//  rear < front�̹Ƿ� queue�� ��

	add(30);	// rear 2, front : 2
	add(40);	// rear 3, front : 2
	add(50);	// rear : 4, front : 2
	add(60);	// rear : 5
	add(70);

	printf("%d\n", delete());
	printf("%d\n", delete());

	add(80);

	return 0;
}