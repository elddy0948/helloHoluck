//유클리드 알고리즘을 사용하여 최대공약수 구하기
/*
임의의 두 정수 num1, num2에 대해
1. num2가 num1보다 크다면 두 값을 바꾼다.
2. num1=num1-num2
3. num1이 0이면 num2가 최대공약수, 0이아니면 1번으로 돌아간다.

-------알고리즘 개선------------
1.num2가 0이아니면
 -num1=num1%num2
 -num1과num2 교환
 -1번으로 돌아감
2.num2가 0이면 num1가 GCD이다.
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