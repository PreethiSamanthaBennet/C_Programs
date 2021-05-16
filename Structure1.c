#include <stdio.h>
#include<string.h>
struct employee{
	char name[20];
	char designation[50];
	int years_of_experience;
};
struct employee c[50];

void experience(int max){
printf("Employees which have more than 3 years experience:");
	int i;
	for(i= 0; i<max; i++){
		if(c[i].years_of_experience >3){
			printf("%s", c[i].name);
		}
	}
}

void designation(int max){
printf("Employees who are managers");
int i;
char manager[] = "manager";
for(i = 0; i<max; i++){
	int a = strcmp(manager, c[i].designation);
	if(a==0){
		printf("%s", c[i].name);
	}
  }
}
int main() {
	int max;
	
	printf("Enter the number of employees:\n ");
	scanf("%d", &max);
	
	int i;
	for(i = 0; i< max; i++){
		printf("Enter employee name:");
		scanf("%s", c[i].name);
		printf("Enter designation of employee:");
		scanf ("%s", c[i].designation);
		printf("Enter years of experience:");
		scanf ("%d", c[i].years_of_experience);
	}
	experience(max);
	designation(max);
	return 0;
}
