#include<stdio.h>
int main() {
	int n, x, y, z;
	printf("Input number : ");
	scanf_s("%d", &n);
	do {
		if (n > 9);
		x = n % 10;
		y = (n % 100) - x;
		y /= 10;
		z = (n % 1000) - (x + y);
		z /= 100;
		n = x * y * z;
		printf("%d . %d . %d = %d \n",z,y,x,n);
		x, y, z = 0;
	} while (n != 0);
	return 0;
}
