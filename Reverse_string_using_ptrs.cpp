#include <stdio.h>
#include <string.h>
int main() {
	char s[50];
	int len, i;
	
	fgets(s, 50, stdin);
	len = strlen(s);
	
	printf("The normal string is: ");
	printf("%s\n", s);
	
	printf("The Reversed string is :");
	
	for(i = len; i >=0; i--){
		printf("%c", *(s + i));
	}
	return 0;
}
