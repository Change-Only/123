#include <stdio.h>
void main() {
	int i, x, j, a[20], t;
	printf("请输入一个正整数：");
	while (1)
	{
		scanf("%d", &x);
		if (x < 0)
			printf("输入的数据有误，请重新输入：");
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