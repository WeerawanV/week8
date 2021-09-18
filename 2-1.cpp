#include<stdio.h>
int main() {
	int n, x, y, z;
	printf("Input number : ");
	scanf_s("%d", &n);
	do {
		if (n > 9) {
			x = n % 10;
			n /= 10;
			y = n % 10;
			n /= 10;
			z = n % 10;
			n = x * y * z;
			printf("%d . %d . %d = %d \n", z, y, x, n);
			x, y, z = 0;
		}
	} while (n != 0);
	return 0;
}
