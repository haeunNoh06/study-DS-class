#include <stdio.h>

// ���ȣ�� ������ ���� ���� �н� ���� : �ϳ���Ÿ��

// ������ ����, �����, ������, ������
void hanoi_tower(int n, char a, char b, char c) {

	if (n == 1) printf("���� %d, %c -> %c\n", n, a, c);// ���������� ����� ���� n�� ������ ��ȣ��
	else {
		hanoi_tower(n - 1, a, c, b);
		printf("���� %d, %c -> %c\n", n, c, b, a);// ����� ���� n�� ������ ��ȣ��
		hanoi_tower(n - 1, b, a, c);
	}

}

// printf�� �ڵ� �󿡼� �� ��, but ��µ� ���� ���� ������ 15�� (���ȣ�� ������)

int main(void) {

	int n = 4;
	hanoi_tower(n, 'A', 'B', 'C');

	return 0;
}