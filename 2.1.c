#include <stdio.h>
void main() {
	int i, x, j, a[20], t;
	printf("������һ����������");
	while (1)
	{
		scanf("%d", &x);
		if (x < 0)
			printf("����������������������룺");
		else
			break;
	}
	i = 0;
	t = x;
	while (x)
	{
		a[i] = x % 16;
		x = x / 16;
		i++;
	}
	for ( j = i-1; j >= 0; j--)
	{
		if (a[j] <= 9)
			printf("%d", a[j]);
		else if (a[j] <= 15 )
			printf("%c", a[j] + 'A' - 10);
	}
	printf("\n");
}