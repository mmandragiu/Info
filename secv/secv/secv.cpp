#include <stdio.h>

#define MAXN 1000001

int A[MAXN], B[MAXN], N, K, S, P, i;

void solve1() {
	int back = 0, Nr = 0, i;

	for (i = 1; i <= N; ++i) {
		B[back + 1] = B[back] + A[i]; //sume partiale
		++back;
		if (back >= K && B[back] - B[back - K] > S) {
			++Nr;
			back -= K;
		}
	}
	printf("%d\n", Nr);
}

void solve2() {
	int back = 0, i;

	for (i = 1; i <= N; ++i) {
		B[back + 1] = B[back] + A[i];
		++back;
		if (back >= K && B[back] - B[back - K] > S) {
			printf("%d ", back - K + 1);
			back -= K;
		}
	}
}

void solve3() {
	int front = 1, back = 0, Nr = 0, i;

	for (i = 1; i <= N; ++i)
		A[i] += A[i - 1];

	for (i = 1; i <= N; ++i) {
		if (i + K <= N) {
			while (front <= back && A[i + K] - A[i - 1] >= A[B[back] + K] - A[B[back] - 1])
				--back;
			B[++back] = i;
		}
		if (A[B[front] + K] - A[B[front] - 1] - (A[i] - A[i - 1]) > S)
			++Nr;
		if (B[front] == i - K)
			++front;
	}
	printf("%d", Nr);
}

int main()
{
	freopen("secv.in", "r", stdin);
	freopen("secv.out", "w", stdout);

	scanf("%d", &P);
	scanf("%d %d %d", &N, &K, &S);
	for (i = 1; i <= N; ++i)
		scanf("%d", &A[i]);

	if (P == 1) solve1();
	if (P == 2) solve3();

	return 0;
}
