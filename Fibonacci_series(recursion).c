#include <stdio.h>

void Fibonacci(int n){
	static int a = 0, b = 1, c;
	
	if (n > 0){
	c = a + b;
	a = b;
	b = c;
	printf("%d", c);
	printf ("%s", " ");
	Fibonacci(n - 1);
	}
}


int main() {
	int n;
	printf("Enter the number of terms of the series to be printed: ");
	scanf("%d", &n);
	printf("%d %d", 0, 1);
	printf ("%s", " ");
	Fibonacci(n - 2);
	return 0;
}
