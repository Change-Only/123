#include <stdio.h>
void main() {
	int a[100];
	int i, j, m, n, k = 0;
	printf("��������n����ѡ��һ��������m:");
	scanf("%d%d", &n, &m);
	printf("����n���˵�����: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\n����˳��Ϊ: ");
	for (i = 0; i < n; i++) {
		j = 1;
		while (j<m)
		{
			while (a[k] == 0)
				k = (k + 1) % n;
			k = (k + 1) % n;
			j++;
		}
		while (a[k] == 0)
			k = (k + 1) % n;
		printf("%d ", k + 1);
		m = a[k];
		a[k] = 0;
	}
}