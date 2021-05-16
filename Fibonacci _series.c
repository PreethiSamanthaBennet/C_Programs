int main() {
int n, i, a = 0, b = 1, c;
printf(" Enter number of digits: "); scanf("%d", &n);
printf("%d\n ", n);
printf("The fibonacci series is: "); for(i = 1; i<=n; i++){
c = a + b; a = b;
b = c;
printf("%d ", a); }
return 0; }
