#include <stdio.h>
#include <math.h>
float area_of_triangle(float, float, float);
float area_of_triangle(float a, float b, float c){
	float area, s;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	return(area);
}
int main() {
	float a, b, c, area;
	
	scanf("%f %f %f", &a, &b, &c);
	area = area_of_triangle(a,b,c);
	
	printf("The area of the triangle is :%f sq.units", area);
	return 0;
}

