//Bronze V
/*
#include<stdio.h> // 15964  : 이상한 기호

int main() {
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld", (A + B) * (A - B));
	return 0;
}

#include<stdio.h> // 9086   : 문자열
#include<stdlib.h>

int main() {
	char arr[1001] = { 0 };
	int T, arrLength;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", arr);
		arrLength = strlen(arr);
		printf("%c%c\n", arr[0], arr[arrLength - 1]);
	}
	return 0;
}

#include<stdio.h> // 4101   : 크냐?
int main(n,m){while(scanf("%d%d",&n,&m),n)puts(n>m?"Yes":"No");}

#include<stdio.h> // 9653   : 스타워즈 로고

int main() {
	printf("    8888888888  888    88888\n");
	printf("   88     88   88 88   88  88\n");
	printf("    8888  88  88   88  88888\n");
	printf("       88 88 888888888 88   88\n");
	printf("88888888  88 88     88 88    888888\n\n");
	printf("88  88  88   888    88888    888888\n");
	printf("88  88  88  88 88   88  88  88\n");
	printf("88 8888 88 88   88  88888    8888\n");
	printf(" 888  888 888888888 88  88      88\n");
	printf("  88  88  88     88 88   88888888\n");
	return 0;
}

#include<stdio.h> // 5337   : 웰컴

int main() {
	printf(".  .   .\n");
	printf("|  | _ | _. _ ._ _  _\n");
	printf("|/\\|(/.|(_.(_)[ | )(/.\n");
	return 0;
}

#include<stdio.h> // 5338   : 마이크로소프트 로고

int main() {
	printf("       _.-;;-._\n");
	printf("'-..-'|   ||   |\n");
	printf("'-..-'|_.-;;-._|\n");
	printf("'-..-'|   ||   |\n");
	printf("'-..-'|_.-''-._|\n");
	return 0;
}

#include<stdio.h> // 2475   : 검증수

int main() {
	int i = 5, n, add = 0;
	while (i--) {
		scanf("%d", &n);
		add += n * n;
	}
	printf("%d", add % 10);
	return 0;
}

#include<stdio.h> // 10757  : 큰 수 A+B
#include<string.h>

char A[10001] = { 0 }, B[10001] = { 0 };
int  N[10002] = { 0 };

int main() {
	int i, j, n, id = 0;
	scanf("%s %s", A, B);
	for (i = strlen(B) - 1, j = strlen(A) - 1; i >= 0 && j >= 0; i--, j--) {
		N[id] += A[j] + B[i] - 96;
		N[id + 1] += N[id] / 10;
		N[id] %= 10;
		id++;
	}
	while (i >= 0) {
		N[id] += B[i] - 48;
		N[id + 1] += N[id] / 10;
		N[id] %= 10;
		id++;
		i--;
	}
	while (j >= 0) {
		N[id] += A[j] - 48;
		N[id + 1] += N[id] / 10;
		N[id] %= 10;
		id++;
		j--;
	}
	if (N[id] != 0) printf("%d", N[id]);
	for (i = id - 1; i >= 0; i--) printf("%d", N[i]);
	return 0;
}

#include<stdio.h> // 11718  : 그대로 출력하기

int main() {
	char n;
	while (scanf("%c", &n)!=-1) {
		printf("%c", n);
	}
	return 0;
}

#include<stdio.h> // 10809  : 알파벳 찾기

int main() {
	int i, n[26] = { 0 };
	char arr[101] = { 0 };
	scanf("%s", arr);
	for (i = 0; arr[i] != 0; i++) {
		if (n[arr[i] - 97] == 0) {
			if(i==0) n[arr[i] - 97] = -2;
			else n[arr[i] - 97] = i;
		}
	}
	for (i = 0; i < 26; i++) {
		if (n[i] == 0) printf("-1 ");
		else if (n[i] == -2) printf("0 ");
		else printf("%d ", n[i]);
	}
	return 0;
}

#include<stdio.h> // 2754   : 학점계산

int main() {
	int index = 0;
	char gr[3];
	double n[13] = { 0.0,0.7,1.0,1.3,1.7,2.0,2.3,2.7,3.0,3.3,3.7,4.0,4.3 };
	scanf("%s", gr);
	if (gr[0] == 'F') index = 0;
	else if (gr[0] == 'D' && gr[1] == '-') index = 1;
	else if (gr[0] == 'D' && gr[1] == '0') index = 2;
	else if (gr[0] == 'D' && gr[1] == '+') index = 3;
	else if (gr[0] == 'C' && gr[1] == '-') index = 4;
	else if (gr[0] == 'C' && gr[1] == '0') index = 5;
	else if (gr[0] == 'C' && gr[1] == '+') index = 6;
	else if (gr[0] == 'B' && gr[1] == '-') index = 7;
	else if (gr[0] == 'B' && gr[1] == '0') index = 8;
	else if (gr[0] == 'B' && gr[1] == '+') index = 9;
	else if (gr[0] == 'A' && gr[1] == '-') index = 10;
	else if (gr[0] == 'A' && gr[1] == '0') index = 11;
	else if (gr[0] == 'A' && gr[1] == '+') index = 12;
	printf("%.1lf", n[index]);
	return 0;
}

#include<stdio.h> // 2744   : 대소문자 바꾸기

int main() {
	char word[101] = { 0 };
	scanf("%s", word);
	for (int i = 0; word[i] != 0; i++) {
		if (word[i] < 91) printf("%c", word[i] + 32);
		else printf("%c", word[i] - 32);
	}
	return 0;
}

#include<stdio.h> // 2743   : 단어 길이 재기

int main() {
	int i, add = 0;
	char word[101] = { 0 };
	scanf("%s", word);
	for (int i = 0; word[i] != 0; i++) add++;
	printf("%d", add);
	return 0;
}

#include<stdio.h> // 2738   : 행렬 덧셈

int main() {
	int A[100][100] = { 0 }, B[100][100] = { 0 }, i, j, N, M;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) for (j = 0; j < M; j++) scanf("%d", &A[i][j]);
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
			printf("%d ", B[i][j] + A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h> // 5597   : 과제 안 내신 분..?

int main() {
	int n, i, st[31] = { 0 }, n1 = 0, n2 = 0;
	for (i = 0; i < 28; i++) {
		scanf("%d", &n);
		st[n] = 1;
	}
	for (i = 1; i <= 30; i++) {
		if (st[i] == 0) {
			n2 = n1;
			n1 = i;
		}
	}
	n1 < n2 ? printf("%d\n%d", n1, n2) : printf("%d\n%d", n2, n1);
	return 0;
}

#include<stdio.h> // 10807  : 개수 세기

int main() {
	int N, i, n[100] = { 0 }, v, cnt = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &n[i]);
	scanf("%d", &v);
	for (i = 0; i < N; i++) if (n[i] == v) cnt++;
	printf("%d", cnt);
	return 0;
}

#include<stdio.h> // 10872  : 팩토리얼

int main() {
	int N, i, add = 1;
	scanf("%d", &N);
	if (N == 0) {
		printf("1");
		return 0;
	}
	for (i = 1; i <= N; i++) add *= i;
	printf("%d", add);
	return 0;
}

#include<stdio.h> // 2420   : 사파리월드

int main() {
	long long int N, M;
	scanf("%lld %lld", &N, &M);
	printf("%lld", N - M < 0 ? -(N - M) : N - M);
	return 0;
}

#include<stdio.h> // 11382  : 꼬마 정민

int main() {
	long long int A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld", A + B + C);
	return 0;
}

#include<stdio.h> // 7287   : 등록

int main() {
	printf("69\nkocheck");
	return 0;
}

#include<stdio.h> // 10699  : 오늘 날짜

int main() {
	printf("2022-09-27");
	return 0;
}

#include<stdio.h> // 11942  : 고려대는 사랑입니다

int main() {
	printf("고려대학교");
	return 0;
}

#include<stdio.h> // 3003   : 킹, 퀸, 룩, 비숍, 나이트, 폰

int main() {
	int k, q, r, b, kn, p;
	scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &kn, &p);
	printf("%d %d %d %d %d %d", -(k - 1), -(q - 1), -(r - 2), -(b - 2), -(kn - 2), -(p - 8));
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

#include<stdio.h> // 2741   : N 찍기

int main() {
	int N, i;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return 0;
}

#include<stdio.h> // 2739   : 구구단

int main() {
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}

#include<stdio.h> //  11654  : 아스키코드

int main() {
	char value;
	scanf("%c", &value);
	printf("%d", value);
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

#include<stdio.h> // 2558   : A+B - 2

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", A + B);
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

#include<stdio.h> // 25304  : 영수증

int main() {
	int result, n, price, count, plus = 0;
	scanf("%d", &result);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &price, &count);
		plus += price * count;
	}
	if (result == plus) printf("Yes");
	else printf("No");
	return 0;
}

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
*/

//Bronze IV
/*
#include<stdio.h> // 20232  : Archivist

int main() {
	int y;
	scanf("%d", &y);
	switch (y) {
	case 1995:
	case 1998:
	case 1999:
	case 2001:
	case 2002:
	case 2003:
	case 2004:
	case 2005:
	case 2009:
	case 2010:
	case 2011:
	case 2012:
	case 2014:
	case 2015:
	case 2016:
	case 2017:
	case 2019:
		printf("ITMO");
		break;
	case 1996:
	case 1997:
	case 2000:
	case 2007:
	case 2008:
	case 2013:
	case 2018:
		printf("SPbSU");
		break;
	default:
		printf("PetrSU, ITMO");
		break;
	}
	return 0;
}

#include<stdio.h> // 20499  : Darius님 한타 안 함?

int main() {
	int K, D, A;
	scanf("%d/%d/%d", &K, &D, &A);
	K + A < D || D == 0 ? printf("hasu") : printf("gosu");
	return 0;
}

#include<stdio.h> // 2752   : 세수 정렬

int main() {
	int n[3], i, j;
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (n[j] > n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	printf("%d %d %d", n[0], n[1], n[2]);
	return 0;
}

#include<stdio.h> // 11720  : 숫자의 합

int main() {
	int N, i, add = 0;
	char n[101] = { 0 };
	scanf("%d", &N);
	scanf("%s", n);
	for (i = 0; i < N; i++) {
		add += n[i] - 48;
	}
	printf("%d", add);
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

#include<stdio.h> // 2440   : 별 찍기 - 3

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j++) printf("*");
		printf("\n");
	}
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



#include<stdio.h> // 2742   : 기찍 N

int main() {
	int N, i;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		printf("%d\n", i);
	}
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
}
*/

//Bronze III
/*
#include<stdio.h> // 10817  : 세 수

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if ((A >= B && B >= C) || (C >= B && B >= A)) printf("%d", B);
	else if ((B >= A && A >= C) || (C >= A && A >= B)) printf("%d", A);
	else if ((B >= C && C >= A) || (A >= C && C >= B)) printf("%d", C);
	return 0;
}

#include<stdio.h> // 18127  : 모형결정

long long int jaegui(long long int A, long long int B) {
	if (B == 0) return 1;
	return A * B + 1 + jaegui(A, B - 1);
}

int main() {
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld", jaegui(A - 2, B));
	return 0;
}

#include<stdio.h> // 2441   : 별 찍기 - 4

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

#include<stdio.h> // 2442   : 별 찍기 - 5

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

#include<stdio.h> // 2443   : 별 찍기 - 6

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

#include<stdio.h> // 2444   : 별 찍기 - 7

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

#include<stdio.h> // 2445   : 별 찍기 - 8

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

#include<stdio.h> // 2446   : 별 찍기 - 9

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

#include<stdio.h> // 3047   : ABC

int main() {
	int n[3], i, j;
	char key[4];
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	scanf("%s", key);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (n[j] > n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 3; printf("%d ", n[key[i++] - 65]));
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
}
*/

//Bronze II
/*
#include<stdio.h> // 1009   : 분산처리

int main() {
	int i, T, a, b, r;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &a, &b);
		r = a;
		b = b % 4 + 4;
		for (i = 1; i < b; i++) r = (r * a) % 10;
		if (r == 0) r = 10;
		printf("%d\n", r);
	}
	return 0;
}

#include<stdio.h> // 5576   : 콘테스트

int main() {
	int w[10], k[10], i, j, big = 0, index = 0, add = 0;
	for (i = 0; i < 10; i++) scanf("%d", &w[i]);
	for (i = 0; i < 10; i++) scanf("%d", &k[i]);
	for (i = 0; i < 3; i++) {
		big = 0;
		for (j = 0; j < 10; j++) {
			if (w[j] > big) {
				big = w[j];
				index = j;
			}
		}
		add += big;
		w[index] = 0;
	}
	printf("%d ", add);
	add = 0;
	for (i = 0; i < 3; i++) {
		big = 0;
		for (j = 0; j < 10; j++) {
			if (k[j] > big) {
				big = k[j];
				index = j;
			}
		}
		add += big;
		k[index] = 0;
	}
	printf("%d", add);
	return 0;
}

#include<stdio.h> // 1712   : 손익분기점

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) printf("-1");
	else printf("%d", a / (c - b) + 1);
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
}



#include<stdio.h> // 8958   : OX퀴즈

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

//////////////////// 15596  : 정수 N개의 합
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) ans += a[i];
	return ans;
}

#include<stdio.h> // 2750   : 수 정렬하기

int main() {
	int n[1000], i, j, N, tempcount = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &n[i]);
	for (i = 0; i < N; i++) {
		tempcount = 0;
		for (j = 0; j < N-i-1; j++) {
			if (n[j] > n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
				tempcount++;
			}
		}
		if (tempcount == 0) break;
	}
	for (i = 0; i < N; i++) printf("%d ", n[i]);
	return 0;
}

#include<stdio.h> // 10813  : 공 바꾸기

int main() {
	int N, M, i, j, n[101] = { 0 };
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++) n[i] = i;
	for (i = 1; i <= M; i++) {
		int n1, n2, temp = 0;
		scanf("%d %d", &n1, &n2);
		temp = n[n1];
		n[n1] = n[n2];
		n[n2] = temp;
	}
	for (i = 1; i <= N; i++) printf("%d ", n[i]);
	return 0;
}

#include<stdio.h> // 2577   : 숫자의 개수

int main() {
	int A, B, C, mul = 0, n[10] = { 0 };
	scanf("%d %d %d", &A, &B, &C);
	mul = A * B * C;
	while (mul>0) {
		n[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) printf("%d\n", n[i]);
	return 0;
}

#include<stdio.h> // 2908   : 상수

int convert(int n) {
	int one, ten, tho;
	one = n % 10;
	ten = (n / 10) % 10;
	tho = (n / 100) % 10;
	return one * 100 + ten * 10 + tho;
}

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if (convert(A) > convert(B)) printf("%d", convert(A));
	else printf("%d", convert(B));
	return 0;
}
*/

//Bronze I
/*
#include<stdio.h> // 2456   : 나는 학급회장이다

int main() {
	int N, stc[3] = { 0 }, stp[3] = { 0 }, n1, n2, n3;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d %d", &n1, &n2, &n3);
		stc[0] += n1; stc[1] += n2; stc[2] += n3;
		stp[0] += n1 * n1; stp[1] += n2 * n2; stp[2] += n3 * n3;
	}
	if (stp[0] == stp[1] && stp[0] == stp[2]) printf("0 %d", stc[0]);
	else if (stp[0] == stp[1]) stp[0] > stp[2] ? printf("0 %d", stc[0]) : printf("3 %d", stc[2]);
	else if (stp[1] == stp[2]) stp[1] > stp[0] ? printf("0 %d", stc[1]) : printf("1 %d", stc[0]);
	else if (stp[2] == stp[0]) stp[2] > stp[1] ? printf("0 %d", stc[2]) : printf("2 %d", stc[1]);
	else stp[0] > stp[1] ? stp[0] > stp[2] ? printf("1 %d", stc[0]) : printf("3 %d", stc[2]) : stp[1] > stp[2] ? stp[1] > stp[0] ? printf("2 %d", stc[1]) : printf("1 %d", stc[0]) : stp[2] > stp[0] ? stp[2] > stp[1] ? printf("3 %d", stc[2]) : printf("2 %d", stc[1]) : 0;
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
}

#include<stdio.h> // 1546   : 평균

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

#include<stdio.h> // 4344   : 평균은 넘겠지

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
}

#include<stdio.h> // 1157   : 단어 공부

char word[1000001] = { 0 };
int main() {
	int alpha[100] = { 0 }, big = 0, index = 0, count = 0;
	scanf("%s", word);
	for (int i = 0; word[i] != 0; i++) {
		if (word[i] < 91) alpha[word[i] % 65]++;
		else if (word[i] > 96) alpha[word[i] % 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] >= big) {
			count = 0;
			if (alpha[i] == big) count++;
			big = alpha[i];
			index = i;
		}
	}
	if (count > 0) printf("?");
	else printf("%c", index+65);
	return 0;
}
*/
//Silver V
/*
#include<stdio.h> // 1475   : 방 번호

int main() {
	int n[10] = { 0 }, N, big = 0, add = 0;
	scanf("%d", &N);
	do {
		n[N % 10]++;
	} while (N /= 10);
	for (int i = 0; i < 10; i++) {
		if (n[i] > big && i != 6 && i != 9) big = n[i];
		if (i == 6 || i == 9) add += n[i];
	}
	add = add % 2 + add / 2;
	if (add > big) printf("%d", add);
	else printf("%d", big);
	return 0;
}

#include<stdio.h> // 17478  : 재귀함수가 뭔가요?

int i = 0;
int underhamsu(int i) {
	for (int n = 0; n < i; n++) {
		printf("____");
	}
	return 1;
}

int answer(int i) {
	for (int n = i - 1; n >= 0; n--) {
		printf("\n");
		underhamsu(n);
		printf("라고 답변하였지.");
	}
	return 1;
}

int jaeguihamsu(int n) {
	if (i < n) {
		underhamsu(i);
		printf("\"재귀함수가 뭔가요?\"\n");
		underhamsu(i);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		underhamsu(i);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		underhamsu(i);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		i++;
		return jaeguihamsu(n);
	}
	else if (i == n) {
		underhamsu(i);
		printf("\"재귀함수가 뭔가요?\"\n");
		underhamsu(i);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		underhamsu(i);
		printf("라고 답변하였지.");
		answer(n);
	}
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	jaeguihamsu(n);
	return 0;
}*/

//Silver IV
/*
#include<stdio.h> // 10828  : 스택

int n[10001], t = -1;

void push(int x) {
	t++;
	n[t] = x;
}

void pop() {
	if (t > -1) printf("%d\n", n[t--]);
	else printf("-1\n");
}

void size() {
	printf("%d\n", t + 1);
}

void empty() {
	if (t == -1) printf("1\n");
	else printf("0\n");
}

void top() {
	if (t > -1) printf("%d\n", n[t]);
	else printf("-1\n");
}

int main() {
	int N, value;
	char word[6];
	scanf("%d", &N);
	while(N--) {
		scanf("%s", word);
		if (word[0] == 'p' && word[1] == 'u') {
			scanf("%d", &value);
			push(value);
		}
		else if (word[0] == 'p' && word[1] == 'o') pop();
		else if (word[0] == 's') size();
		else if (word[0] == 'e') empty();
		else if (word[0] == 't') top();
	}
	return 0;
}

#include<stdio.h> // 10773  : 제로

int main() {
	int add = 0, top = -1, k, i, n[100000] = { 0 }, num;
	scanf("%d", &k);
	while (k--) {
		scanf("%d", &num);
		if (num > 0) n[++top] = num;
		else top--;
	}
	for (i = 0; i < top + 1; i++) add += n[i];
	printf("%d", add);
	return 0;
}

#include<stdio.h> // 9012   : 괄호

bool check(char br[]) {
	int top = -1;
	char stack[51] = { 0 };
	for (int i = 0; br[i] != NULL; i++) {
		if (br[i] == '(') stack[++top] = br[i];
		else {
			if (top > -1) top--;
			else {
				return false;
			}
		}
	}
	return top > -1 ? false : true;
}

int main() {
	char br[51] = { 0 };
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", br);
		if (check(br)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}*/

//Silver III
/*
#include<stdio.h> // 1003   : 피보나치 함수

int arr[1000];

int fibonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else if (arr[n] != 0) return arr[n];
	else return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int T, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		if (N == 0) puts("1 0");
		else printf("%d %d\n", fibonacci(N - 1), fibonacci(N));
	}
	return 0;
}

#include<stdio.h> // 10799  : 쇠막대기

int stick = 0, num = 0, add = 0;

void check(char br[]) {
	for (int i = 0; br[i] != 0; i++) {
		if (br[i] == '(') {
			stick++;
			num++;
		}
		else if (br[i] == ')' && br[i - 1] == '(') {
			num--;
			stick--;
			add += stick;
		}
		else if (br[i] == ')') stick--;
	}
}

int main() {
	char br[100001] = { 0 };
	scanf("%s", br);
	(check(br));
	printf("%d", add + num);
	return 0;
}*/

//Silver II
/*
#include<stdio.h> // 1406   : 에디터
#include<string.h>

int top1, top2 = -1, i;
char stack1[600001] = { 0 }, stack2[600001] = { 0 };

int main() {
	int M;
	char m, c;
	scanf("%s", stack1);
	top1 = strlen(stack1) - 1;
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("\n%c", &m);
		if (m == 'L') {
			if (top1 > -1) stack2[++top2] = stack1[top1--];
		}
		else if (m == 'D') {
			if (top2 > -1) stack1[++top1] = stack2[top2--];
		}
		else if (m == 'B') {
			if (top1 > -1) top1--;
		}
		else if (m == 'P') {
			scanf(" %c", &c);
			stack1[++top1] = c;
		}
	}
	for (i = 0; i < top1 + 1; i++) printf("%c", stack1[i]);
	for (i = top2; i >= 0; i--) printf("%c", stack2[i]);
	return 0;
}*/

//Silver I
/*
#include<stdio.h> // 1393   : 음하철도 구구팔 //no solve
#include<math.h>

double root(double A) {
	return pow(A, 2) + 1;
}

int main() {
	int xs, ys, xe, ye, dx, dy, nx, ny;
	double d, near = 1000;
	scanf("%d %d", &xs, &ys);
	scanf("%d %d %d %d", &xe, &ye, &dx, &dy);
	double A = dy / dx;
	double C = A * -xe + ye;
	double under = root(A);
	//printf("%d %d", nx, ny);
	return 0;
}

#include<stdio.h> // 1914   : 하노이 탑
#include<math.h>

void hanoi(int n, int start, int mid, int end) {
	if (n == 0) return;
	hanoi(n - 1, start, end, mid);
	printf("%d %d\n", start, end);
	hanoi(n - 1, mid, start, end);
}

void count(int n) {
	int cntarr[32] = { 0 }, i, re = 1, j;
	cntarr[0] = 1;
	while (n--) {
		j = re;
		for (i = 0; i < j; i++) cntarr[i] *= 2;
		for (i = 0; i < j; i++) {
			if (cntarr[i] > 9) {
				cntarr[i + 1] += cntarr[i] / 10;
				cntarr[i] %= 10;
				if (i == j - 1) re++;
			}
		}
	}
	cntarr[0]--;
	for (i = re - 1; i >= 0; i--) printf("%d", cntarr[i]);
}

int main() {
	int n;
	scanf("%d", &n);
	if (n <= 20) {
		printf("%.0lf\n", pow(2, n) - 1);
		hanoi(n, 1, 2, 3);
	}
	else count(n);
	return 0;
}*/

//Gold V
/*
#include<stdio.h> // 2447   : 별 찍기 - 10

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
}

#include<stdio.h> // 1019   : 책 페이지 (fail-time)

int N, num[10] = { 0 }, ten = 10;

void plus(int f, int n, int nanugi) {
	for (int i = f; i <= N; i++) {
		if (i == ten) {
			ten *= 10;
			plus(i, ten, ten / 10);
		}
		num[i % n / nanugi]++;
	}
}

int main() {
	int count = 0, big;
	for (int i = 0; i < 10; i++) num[i] = 0;
	scanf("%d", &N);
	big = N;
	while (big != 0) {
		big /= 10;
		++count;
	}
	plus(1, 10, 1);
	for (int i = 0; i < 10; i++) printf("%d ", num[i]);
	printf("\n");
	return 0;
}*/

//Gold VI
/*
#include<stdio.h> // 9935   : 문자열 폭발
#include<string.h>

int top1 = -1, top2 = -1;
char stack1[1000001], stack2[1000001], boom[37];

int main() {
	int stacklength, boomlength, i;
	scanf("%s", stack1);
	stacklength = strlen(stack1);
	scanf("%s", boom);
	boomlength = strlen(boom);
	while (stacklength--) {
		stack2[++top2] = stack1[++top1];
		if (stack2[top2] == boom[boomlength-1]) {
			int bleng = boomlength - 1;
			for (i = top2; i > top2 - boomlength; i--) {
				if (top2 - boomlength + 1 < 0) break;
				if (stack2[i] == boom[bleng]) {
					if (i == top2 - boomlength + 1 && stack2[i] == boom[bleng]) top2 -= boomlength;
					bleng--;
				}
				else break;
			}
		}
	}
	if (top2 < 0) printf("FRULA");
	else for (i = 0; i <= top2; i++) printf("%c", stack2[i]);
	return 0;
}*/

//Unrated
/*
#include<stdio.h> // 15802  : 타노스

int main() {
	printf("1");
	return 0;
}

#include<stdio.h> // 1237   : 정ㅋ벅ㅋ

int main() {
	printf("문제의 정답");
	return 0;
}*/

//#include<stdio.h> // 시간초과! 어떻게! 세그먼트 트리! 무엇인가!
//
//int small = 1000000000, n[100000], a;
//
//int small_finder(int b) {
//	if (n[b] < small) small = n[b];
//	if (b == a) return small;
//	return small_finder(b - 1);
//}
//
//int main() {
//	int N, M, b, i;
//	scanf("%d %d", &N, &M);
//	for (i = 0; i < N; i++) { scanf("%d", &n[i]); }
//	while (M--) {
//		scanf("%d %d", &a, &b);
//		a--; b--;
//		small = 1000000000;
//		printf("%d\n", small_finder(b));
//	}
//	return 0;
//}