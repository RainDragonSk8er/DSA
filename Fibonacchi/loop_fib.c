#include <stdio.h>

int main() {
	int a = 0;
	int b = 1;
	int c;

	int i;


	printf("%d\n", a);
	printf("%d\n", b);
		
	for (i = 0; i < 20; i++ ) {
		c = a + b;
		a = b;
		b = c;

		printf("%d\n", c);
	
	};

	return 0;
}

