//��Ŭ���� �˰����� ����Ͽ� �ִ����� ���ϱ�
/*
������ �� ���� num1, num2�� ����
1. num2�� num1���� ũ�ٸ� �� ���� �ٲ۴�.
2. num1=num1-num2
3. num1�� 0�̸� num2�� �ִ�����, 0�̾ƴϸ� 1������ ���ư���.

-------�˰��� ����------------
1.num2�� 0�̾ƴϸ�
 -num1=num1%num2
 -num1��num2 ��ȯ
 -1������ ���ư�
2.num2�� 0�̸� num1�� GCD�̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

int result;
/*void get_GCD(int num1, int num2) {
	int temp;
	while (num1) {
		if (num1 < num2) {
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		num1 = num1 - num2;
	}
	result = num2;
}*/

/*void get_GCD(int num1, int num2) {
	int temp;
	while (num2) {
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	result = num1;
}*/

void get_GCD(int num1, int num2) {
	if (num2 == 0) {
		result = num1;
		return;
	}
	else
		return get_GCD(num2, num1%num2);
}

int main() {
	int num1, num2;
	printf("Enter two number : ");
	scanf("%d %d", &num1, &num2);
	get_GCD(num1, num2);
	printf("\nGCD : %d", result);
	return 0;
}