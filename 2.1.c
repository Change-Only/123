#include <stdio.h>
void  main() {
	int a[100];
	int i, j, m, n, k = 0;
	printf("����������n����ѡһ��������m��");
	scanf("%d%d", &n, &m);
	printf("����n���˵����룺\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n����˳��Ϊ��");
	for (i = 0; i < n; i++) {
		j = 1;
		while (j < m) {
			while (a[k] == 0)
				k = (k + 1) % n;
			j++;
			k = (k + 1) % n;
		}
		while (a[k]==0)
			k = (k + 1) % n;
		printf("%d", k + 1);
		m = a[k];
		a[k] = 0;
	}
}