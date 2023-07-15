// Nermucvum a erku tiv, cragir@ stugum u tpum a drancic amenamec@


#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;

	printf("Input the value of a: ");
	scanf("%d", &a);
	
	printf("Input the value of b: ");
	scanf("%d", &b);

	if(a > b)
		printf("The biggest is %d \n", a);
	else if(a == b)
		printf("Numbers are equal \n");
	else 
		printf("The biggest is %d \n", b);

}
