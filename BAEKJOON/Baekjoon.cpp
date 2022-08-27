//입출력과 사칙연산
/*
#include<stdio.h> // 2557   : Hello World

int main() {
	printf("Hello World!");
	return 0;
}

#include<stdio.h> // 10718  : We love kriii

int main() {
	printf("강한친구 대한육군\n강한친구 대한육군");
	return 0;
}

#include<stdio.h> // 10171  : 고양이

int main() {
	printf("\\    /\\\n )  ( ')\n(  /  )\n \\(__)|");
	return 0;
}

#include<stdio.h> // 225083 : 새싹

int main() {
	printf("         ,r\'\"7\n");
	printf("r`-_   ,'  ,/\n");
	printf(" \\. \". L_r\'\n");
	printf("   `~\\/\n");
	printf("      |\n");
	printf("      |");
	return 0;
}

#include<stdio.h> // 1000   : A+B

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A + B);
	return 0;
}

#include<stdio.h> // 1001   : A-B

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A - B);
	return 0;
}

#include<stdio.h> // 10998  : A*B

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A * B);
	return 0;
}

#include<stdio.h> // 1008   : A/B

int main() {
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.9lf", A / B);
	return 0;
}

#include<stdio.h> // 10869  : 사칙연산

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
	return 0;
}

#include<stdio.h> // 10926  : ??!

int main() {
	char Id[51] = { 0 };
	scanf("%s", &Id);
	printf("%s??!", Id);
	return 0;
}

#include<stdio.h> // 18108  : 1998년생인 내가 태국에서는 2541년생?!

int main() {
	int y;
	scanf("%d", &y);
	printf("%d", y - 543);
	return 0;
}

#include<stdio.h> // 10430  : 나머지

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d", ((A % C) * (B % C)) % C);
	return 0;
}

#include<stdio.h> // 2588   : 곱셈

int main() {
	int num1, num2, il, sib, back;
	scanf("%d %d", &num1, &num2);
	il = num1 * (num2 % 10);
	sib = num1 * (num2 % 100 / 10);
	back = num1 * (num2 % 1000 / 100);
	printf("%d\n%d\n%d\n%d", il, sib, back, num1 * num2);
	return 0;
}*/

//조건문
/*
#include<stdio.h> // 1330   : 두 수 비교하기

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	A > B ? puts(">") : A < B ? puts("<") : puts("==");
	return 0;
}

#include<stdio.h> // 9498   : 시험 성적

int main() {
	int A;
	scanf("%d", &A);
	if (A <= 100 && A >= 90) printf("A");
	else if (A >= 80 && A < 90) printf("B");
	else if (A >= 70 && A < 80) printf("C");
	else if (A >= 60 && A < 70) printf("D");
	else printf("Fhttps://www.acmicpc.net/submit/2753");
	return 0;
}

#include<stdio.h> // 2753   : 윤년

int main() {
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("1");
	}
	else printf("0");
	return 0;
}

#include<stdio.h> // 14681  : 사분면 고르기

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0) printf("1");
	else if (x < 0 && y>0) printf("2");
	else if (x < 0 && y < 0) printf("3");
	else if (x > 0 && y < 0) printf("4");
	return 0;
}

#include<stdio.h> // 2884   : 알람 시계

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m - 45 < 0) {
		m = 60 + (m - 45);
		if (h - 1 < 0) h = 23;
		else h = h - 1;
	}
	else m = m - 45;
	printf("%d %d", h, m);
	return 0;
}

#include<stdio.h> // 2525   : 오븐 시계

int main() {
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	m += t;
	h = h + m / 60;
	if (m >= 60) {
		m %= 60;
		if (h >= 24) {
			h -= 24;
		}
	}
	printf("%d %d", h, m);
	return 0;
}

#include<stdio.h> // 2480   : 주사위 세개

int main() {
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 == n2 && n2 == n3) printf("%d", 10000 + n1 * 1000);
	else if (n1 == n2 && n1 != n3) printf("%d", 1000 + n1 * 100);
	else if (n2 == n3 && n2 != n1) printf("%d", 1000 + n2 * 100);
	else if (n1 == n3 && n1 != n2) printf("%d", 1000 + n3 * 100);
	else {
		if (n1 > n2 && n1 > n3) printf("%d", n1 * 100);
		else if (n2 > n1 && n2 > n3) printf("%d", n2 * 100);
		else if (n3 > n1 && n3 > n2) printf("%d", n3 * 100);
	}
	return 0;
}*/

//반복문
/*
#include<stdio.h> // 2739   : 구구단

int main() {
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}

#include<stdio.h> // 10950  : A+B - 3

int main() {
	int n, i, o, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &o, &t);
		printf("%d\n", o + t);
	}
	return 0;
}

#include<stdio.h> // 8393   : 합

int main() {
	int n, i, t = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		t += i;
	}
	printf("%d", t);
	return 0;
}

#include<stdio.h> // 15552  : 빠른 A+B

int main() {
	int n, i, o, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &o, &t);
		printf("%d\n", o + t);
	}
	return 0;
}

#include<stdio.h> // 2741   : N 찍기

int main() {
	int N, i;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return 0;
}

#include<stdio.h> // 2742   : 기찍 N

int main() {
	int N, i;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}

#include<stdio.h> // 11021  : A+B - 7

int main() {
	int n, i, o, t;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &o, &t);
		printf("Case #%d: %d\n", i, o + t);
	}
	return 0;
}

#include<stdio.h> // 11022  : A+B - 8

int main() {
	int n, i, o, t;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &o, &t);
		printf("Case #%d: %d + %d = %d\n", i, o, t, o + t);
	}
	return 0;
}

#include<stdio.h> // 2438   : 별 찍기 - 1

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2439   : 별 찍기 - 2

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 10871  : X보다 작은 수

int main() {
	int N, X, n;
	scanf("%d %d", &N, &X);
	while (N--) {
		scanf("%d", &n);
		if (n < X) printf("%d ", n);
	}
	return 0;
}

#include<stdio.h> // 10952  : A+B - 5

int main() {
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (!A && !B) return 0;
		printf("%d\n", A + B);
	}
	return 0;
}

#include<stdio.h> // 10951  : A+B - 4

int main() {
	int A, B;
	while (1) {
		if (scanf("%d %d", &A, &B) == -1) return 0;
		printf("%d\n", A + B);
	}
	return 0;
}

#include<stdio.h> // 1110   : 더하기 사이클

int main() {
	int N, n1, n2, tmp, count = 0;
	scanf("%d", &N);
	n1 = N / 10;
	n2 = N % 10;
	while (1) {
		tmp = n2;
		n2 = (n1 + n2) % 10;
		n1 = tmp;
		count++;
		if (N == n1 * 10 + n2) {
			printf("%d", count);
			break;
		}
	}
	return 0;
}*/

//1차원 배열
/*
#include<stdio.h> // 10818  : 최소, 최대

int arr[1000000] = { 0 };

int main() {
	int N, big = -1000000, small = 1000000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (big < arr[i]) big = arr[i];
		if (small > arr[i]) small = arr[i];
	}
	printf("%d %d", small, big);
	return 0;
}

#include<stdio.h> // 2562   : 최댓값

int main() {
	int n[9] = { 0 }, big = 0, bindex = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
		if (big < n[i]) {
			big = n[i];
			bindex = i;
		}
	}
	printf("%d\n%d", big, bindex + 1);
	return 0;
}

#include<stdio.h> // 3052   : 나머지

int main() {
	int n[10] = { 0 }, count = 0, num, Ccount = 0, zero = 1;
	for (int i = 0; i < 10; i++) {
		Ccount = 0;
		scanf("%d", &num);
		num %= 42;
		for (int j = 0; j < 10; j++) {
			if (num == 0) {
				if (zero == 1) {
					zero = 0;
					break;
				}
			}
			if (num == n[j]) Ccount++;
		}
		if (Ccount == 0) {
			n[count] = num;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}*/