//�����
/*
#include<stdio.h> // 2440   : �� ��� - 3

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j++) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2441   : �� ��� - 4

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) printf(" ");
		for (j = i; j <= n; j++) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2442   : �� ��� - 5

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j > i; j--) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		for (j = 1; j <= i - 1; j++) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2443   : �� ��� - 6

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) printf(" ");
		for (j = n; j >= i; j--) printf("*");
		for (j = n-1; j >= i; j--) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2444   : �� ��� - 7

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j > i; j--) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		for (j = 1; j <= i - 1; j++) printf("*");
		printf("\n");
	}
	for (i = 1; i <= n-1; i++) {
		for (j = 1; j <= i; j++) printf(" ");
		for (j = n-1; j >= i; j--) printf("*");
		for (j = n-2; j >= i; j--) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2445   : �� ��� - 8

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) printf("*");
		for (j = 1; j <= (n - i) * 2; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	for (i = 1; i <= n; i++) {
		for (j = n - i; j >= 1; j--) printf("*");
		for (j = 1; j <= i * 2; j++) printf(" ");
		for (j = n - i; j >= 1; j--) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2446   : �� ��� - 9

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) printf(" ");
		for (j = n; j >= i; j--) printf("*");
		for (j = n - 1; j >= i; j--) printf("*");
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = n; j > i + 1; j--) printf(" ");
		for (j = 2; j <= i + 2; j++) printf("*");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 2447   : �� ��� - 10

void Star(int N, int i, int j) {
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1) printf(" ");
	else {
		if (N / 3 == 0) printf("*");
		else Star(N / 3, i, j);
	}
}

int main() {
	int N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) Star(N, i, j);
		printf("\n");
	}
	return 0;
}*/

//����°� ��Ģ����
/*
#include<stdio.h> // 2557   : Hello World

int main() {
	printf("Hello World!");
	return 0;
}

#include<stdio.h> // 10718  : We love kriii

int main() {
	printf("����ģ�� ��������\n����ģ�� ��������");
	return 0;
}

#include<stdio.h> // 10171  : �����

int main() {
	printf("\\    /\\\n )  ( ')\n(  /  )\n \\(__)|");
	return 0;
}

#include<stdio.h> // 225083 : ����

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

#include<stdio.h> // 10869  : ��Ģ����

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

#include<stdio.h> // 18108  : 1998����� ���� �±������� 2541���?!

int main() {
	int y;
	scanf("%d", &y);
	printf("%d", y - 543);
	return 0;
}

#include<stdio.h> // 10430  : ������

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d", ((A % C) * (B % C)) % C);
	return 0;
}

#include<stdio.h> // 2588   : ����

int main() {
	int num1, num2, il, sib, back;
	scanf("%d %d", &num1, &num2);
	il = num1 * (num2 % 10);
	sib = num1 * (num2 % 100 / 10);
	back = num1 * (num2 % 1000 / 100);
	printf("%d\n%d\n%d\n%d", il, sib, back, num1 * num2);
	return 0;
}*/

//���ǹ�
/*
#include<stdio.h> // 1330   : �� �� ���ϱ�

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	A > B ? puts(">") : A < B ? puts("<") : puts("==");
	return 0;
}

#include<stdio.h> // 9498   : ���� ����

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

#include<stdio.h> // 2753   : ����

int main() {
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("1");
	}
	else printf("0");
	return 0;
}

#include<stdio.h> // 14681  : ��и� ����

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0) printf("1");
	else if (x < 0 && y>0) printf("2");
	else if (x < 0 && y < 0) printf("3");
	else if (x > 0 && y < 0) printf("4");
	return 0;
}

#include<stdio.h> // 2884   : �˶� �ð�

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

#include<stdio.h> // 2525   : ���� �ð�

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

#include<stdio.h> // 2480   : �ֻ��� ����

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

//�ݺ���
/*
#include<stdio.h> // 2739   : ������

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

#include<stdio.h> // 8393   : ��

int main() {
	int n, i, t = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		t += i;
	}
	printf("%d", t);
	return 0;
}

#include<stdio.h> // 15552  : ���� A+B

int main() {
	int n, i, o, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &o, &t);
		printf("%d\n", o + t);
	}
	return 0;
}

#include<stdio.h> // 2741   : N ���

int main() {
	int N, i;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return 0;
}

#include<stdio.h> // 2742   : ���� N

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

#include<stdio.h> // 2438   : �� ��� - 1

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

#include<stdio.h> // 2439   : �� ��� - 2

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

#include<stdio.h> // 10871  : X���� ���� ��

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

#include<stdio.h> // 1110   : ���ϱ� ����Ŭ

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

//1���� �迭
/*
#include<stdio.h> // 10818  : �ּ�, �ִ�

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

#include<stdio.h> // 2562   : �ִ�

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

#include<stdio.h> // 3052   : ������

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
}

#include<stdio.h> // 1546   : ���

int main() {
	int n[1000] = { 0 }, N, i, m = 0;
	double avg = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &n[i]);
		if (n[i] > m) m = n[i];
	}
	for (i = 0; i < N; i++) {
		avg +=  (double) n[i] / m * 100;
	}
	avg /= N;
	printf("%lf", avg);
	return 0;
}

#include<stdio.h> // 8958   : OX����

int main() {
	int n, Ocheck = 1, count, i, j;
	char ox[100] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		count = 0;
		Ocheck = 1;
		scanf("%s", ox);
		for (j = 0; j < 100; j++) {
			if (ox[j] == 'O') {
				count += Ocheck;
				Ocheck++;
				ox[j] = 0;
			}
			else if (ox[j] == 'X') {
				Ocheck = 1;
				ox[j] = 0;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

#include<stdio.h> // 4344   : ����� �Ѱ���

int main() {
	int C, N, n[1000] = { 0 }, i, j, avg = 0, count = 0;
	scanf("%d", &C);
	for (i = 0; i < C; i++) {
		count = 0;
		avg = 0;
		scanf("%d", &N);
		for (j = 0; j < N; j++) {
			scanf("%d", &n[j]);
			avg += n[j];
		}
		avg /= N;
		for (j = 0; j < N; j++) {
			if (n[j] > avg) count++;
		}
		printf("%.3lf%%\n", (double)count / N * 100);
	}
	return 0;
}*/

//�Լ�
/*
//////////////////// 15596  : ���� N���� ��
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) ans += a[i];
	return ans;
}*/