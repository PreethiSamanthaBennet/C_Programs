#include <stdio.h>
#include <string.h>

int main() {
	char a[200];
	char b[200];
	
	printf("Enter the First(larger) string \n");
	printf("Enter the Second(smaller) string \n");
	
	scanf("%s", a);
	scanf("%s", b);
	
	char *ret;
	ret =  strstr(a,b);
	
	if (ret)
	{
		printf("The Substring (Second string) exists in the given string (First string)");
	}
	
	else
	{
		printf("The Substring (Second string) does not exist in the given string (First string)");
	}

	return 0;
}
