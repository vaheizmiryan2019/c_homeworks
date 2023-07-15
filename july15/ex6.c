//Cragir vor 0-9 float ketic heto 5 tiv unecox tvi vra stugum a ete 5rd@ 0 a sarqum a mek tpum a
//ete che aranc sarqelu nuyn tiv@ tpum a


#include <stdio.h>

int main() {

	float a = 0;

	printf("Enter a float number from 0 to 9(Must include 5 numbers after dot): ");
	scanf("%f", &a);

	int afterDot = (int)(a * 100000) % 100000;

	if(afterDot ==  0) {
		a = a + 0.00001;
		printf("%0.5f\n",a);
	} else
		printf("%0.5f\n", a);
}
