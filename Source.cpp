#include<stdio.h>
int main() {
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i == 1 || i == n) {
			for (j = 1; j <= n; j++) {
				printf("*");
			}
		}
		else if (i != 1 && i != n) {
			for (j = 1; j <= n; j++) {
				if (j == 1 || j == n) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}