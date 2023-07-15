// Cragir vor@ ktpi 3 tveri amenamec yndhanur bajanarar@

#include <stdio.h>

int num2(int a, int b);
int num3(int a, int b, int c);

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);

	int final = num3(a, b, c);
	printf("The greatest common divisor is %d\n", final);
}

int num2(int a, int b) {
       	if (b == 0)
		return a;
	return num2(b, a % b);
}

int num3(int a, int b, int c) {
	return num2(a, num2(b, c));
}
