#include <stdio.h>

int main() {
	int a,b,u,t,h,cubesum;
	printf("Enter a value:\n");
	scanf ("%d",&a);
	u = a%10;
	b = a/10;
	t = b%10;
	h = b/10;
	
	cubesum = u*u*u + t*t*t + h*h*h;
	
	if (cubesum == a)
		printf("The given number is an Armstrong number");
		
	else
		printf("The given number is not an Armstrong number");
	
	return 0;
}
