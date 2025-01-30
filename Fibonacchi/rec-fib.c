#include <stdio.h>


void recFibonacchi(int a, int b, int count) {

	int c;

	c = a + b;
	count++;
	if (count < 20) {
       		printf("%d\n", c);
	       	recFibonacchi(b, c, count);
	} else {
		printf("%d\nFIN", c);
	};

	
};

int nFibonacchi(int n) {

	if (n <= 1) {
	       	return n;
	} else {
		return nFibonacchi(n - 1) + nFibonacchi(n - 2);
	};
};

int main() {
	
	int a = 0;
	int b = 1;
	int count = 0;
	
	int n;

	// recFibonacchi(a, b, count);
	for (n = 0; n < 20; n++) {
		int nth = nFibonacchi(n);
		printf("The %d-th Fibonacchi number is %d\n", n, nth);
	};
	return 0;
}

