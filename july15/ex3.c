// Nermucvum a 3 tiv, ete ereqic erkus@ havasar en tpum a amenamec@
// hakarak depqum pahanjov ban tvac chi, es em avelacnum vor cragir@ tpi "chkan havasar tver"



#include <stdio.h>

int max(int a, int b, int c);

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	printf("Insert first number: ");
	scanf("%d", &a);
	printf("Insert second number: ");
	scanf("%d", &b);
	printf("Insert third number: ");
	scanf("%d", &c);

	if(a == b || a == c || b == c)
		max(a,b,c);
	else
		puts("There is no equal numbers");
}

int max(int a, int b, int c) {

	if (a == b && a > c)
		puts("The biggest ones are a and b");
	else if (a == b && a < c)
		puts("The biggest one is c");
	else if (a == c && a > b)
		puts("The biggest ones are a and c");
	else if(a == c && a < b)
		puts("The biggest one is b");
	else if (b == c && b > a)
		puts("The biggest ones are b and c");
	else if (b == c && b < a)
		puts("The biggest one is a");
}
