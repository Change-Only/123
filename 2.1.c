//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
//void main() {
//	float a, b, c, s, area;
//	printf("Please input a,b,c:");
//	scanf("%f%f%f", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a) {
//		s = (a + b + c)/2.0;
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("a=%8.2f,b=%8.2f,c=%8.2f", a, b, c);
//		printf("Area=%8.2f", area);
//	}
//
//}
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void main() {
	int a[5], i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++)
		a[i] = rand() % 100;
	for (i = 0; i < 5; i++)
		printf("%5d", a[i]);
	printf("\n");
}