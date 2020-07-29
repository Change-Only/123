#include<stdio.h>
void main() {
	int a, b;
	printf("Please input a,b:");
	scanf_s("%d%d",&a,&b);
	printf("%d+%d=%d", a, b, a + b);
}