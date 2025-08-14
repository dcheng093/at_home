#include <stdio.h>


int main(void) {
	int a = 42;
	int *b;
	*b = 69;

	printf("%s\n:", "Before");

	printf("%p\n", b);
	printf("%d\n", b);
	printf("%d\n", *b);

	b = &a;

	printf("%s\n:", "After");

	printf("%p\n", b);
	printf("%d\n", b);
	printf("%d\n", *b);
	
	char *ptr = (char *) b;

	printf("%s\n", *ptr);


	return 0;
}


