// Xndir vor stugum u tpum a mutqagrvac tar@ dzaynavor a te baxadzayn


#include <stdio.h>

int main() {

	char letter[2];
	printf("Enter the character(in lowercase): ");
	scanf("%1s", letter);

	switch (letter[0]) 
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
			puts("Character is vowel");
			break;
		default:
			puts("Character is constant");
	}

	return 0;

}
