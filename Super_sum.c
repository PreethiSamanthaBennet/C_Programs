#include <stdio.h>

int main() {
	int x;
	printf("Enter a number:\n ");
scanf("%d",&x);
	int y = x % 9;

	if(y == 0)
		printf("The super sum is 9");
		
	else
		printf("The super sum = %d ",y);
	return 0;
}
