#include <stdio.h>

// 재귀호출 공부의 제일 좋은 학습 수단 : 하노이타워

// 원판의 개수, 출발지, 경유지, 도착지
void hanoi_tower(int n, char a, char b, char c) {

	if (n == 1) printf("원판 %d, %c -> %c\n", n, a, c);// 마찬가지로 출력할 때의 n은 원판의 번호임
	else {
		hanoi_tower(n - 1, a, c, b);
		printf("원판 %d, %c -> %c\n", n, c, b, a);// 출력할 때의 n은 원판의 번호임
		hanoi_tower(n - 1, b, a, c);
	}

}

// printf는 코드 상에서 두 줄, but 출력된 줄의 문장 개수는 15개 (재귀호출 때문에)

int main(void) {

	int n = 4;
	hanoi_tower(n, 'A', 'B', 'C');

	return 0;
}